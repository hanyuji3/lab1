#ifndef MY_ASSERT_H
#define MY_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

void my_assert_fail(const char *expr, const char *file, int line)
{
    fprintf(stderr, "%s:%d: Assertion `%s' failed.\n", file, line, expr);
    abort();
}

#ifdef NDEBUG
#define my_assert(expr) ((void)0)
#else
#define my_assert(expr) \
    ((expr) ? (void)0 : my_assert_fail(#expr, __FILE__, __LINE__))
#endif

#endif
