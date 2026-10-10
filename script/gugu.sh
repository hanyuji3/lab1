#!/bin/bash

# for문: 2~4단
for dan in {2..4}; do
    echo "--- $dan단 ---"
    for n in {1..9}; do
        echo "$dan x $n = $((dan * n))"
    done
done

# while문: 5~7단
dan=5
while [ $dan -le 7 ]; do
    echo "--- $dan단 ---"
    n=1
    while [ $n -le 9 ]; do
        echo "$dan x $n = $((dan * n))"
        n=$((n + 1))
    done
    dan=$((dan + 1))
done

# until문: 8~9단
dan=8
until [ $dan -gt 9 ]; do
    echo "--- $dan단 ---"
    n=1
    until [ $n -gt 9 ]; do
        echo "$dan x $n = $((dan * n))"
        n=$((n + 1))
    done
    dan=$((dan + 1))
done
