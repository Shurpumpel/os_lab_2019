#!/bin/bash 
count=0 
sum=0 
while [ -n "$1" ] 
do 
sum=$[$sum+$1] 
count=$[ $count + 1 ] 
shift 
done 
sum=$(($sum/$count)) 
echo "$count" 
echo "$sum"