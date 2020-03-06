#!/usr/bin/env bash

digits=298

rand=$(od -A n -t d -N 2 /dev/urandom |tr -d ' ')
num=$((rand % 10))
while [ ${#num} -lt $digits ]; do
rand=$(od -A n -t d -N 1 /dev/urandom |tr -d ' ')
num="${num} $((rand % 10))"
done
echo $num > numbers.txt