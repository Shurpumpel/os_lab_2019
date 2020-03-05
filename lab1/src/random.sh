count=$1
i=0
while [[ $i -lt $count ]]
do
echo $RANDOM
let "i=i+1"
done