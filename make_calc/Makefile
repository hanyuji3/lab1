CC = gcc
LIBDIR = lib

all: main_static main_shared main_dynamic

calc.o: calc.c calc.h
	$(CC) -c calc.c -o calc.o

calc_pic.o: calc.c calc.h
	$(CC) -fPIC -c calc.c -o calc_pic.o

$(LIBDIR)/libcalc.a: calc.o
	ar rcs $(LIBDIR)/libcalc.a calc.o

$(LIBDIR)/libcalc.so: calc_pic.o
	$(CC) -shared calc_pic.o -o $(LIBDIR)/libcalc.so

main_static: main.c $(LIBDIR)/libcalc.a
	$(CC) main.c $(LIBDIR)/libcalc.a -o main_static

main_shared: main.c $(LIBDIR)/libcalc.so
	$(CC) main.c -L$(LIBDIR) -lcalc -o main_shared

main_dynamic: dyn_main.c $(LIBDIR)/libcalc.so
	$(CC) dyn_main.c -o main_dynamic -ldl

clean:
	rm -f *.o main_static main_shared main_dynamic $(LIBDIR)/*
