#!/bin/bash

echo -n "피보나치 수를 몇 개 출력할까요? "
read cnt

a=0
b=1
k=1
while [ $k -le $cnt ]; do
    echo -n "$a "
    let next=a+b
    a=$b
    b=$next
    let k++
done
echo
