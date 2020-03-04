i=0
sum=0
for val in $@
    do
    i=$(($i+1))
    sum=$(($sum+$val))
    done
echo $(($sum/$i))