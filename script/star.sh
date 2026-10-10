#!/bin/bash

line=5
while [ $line -ge 1 ]; do
    cnt=1
    while [ $cnt -le $line ]; do
        echo -n "*"
        cnt=$((cnt + 1))
    done
    echo
    line=$((line - 1))
done
