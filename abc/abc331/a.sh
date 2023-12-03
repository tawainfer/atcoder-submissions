# https://atcoder.jp/contests/abc331/submissions/48169773

#!/bin/sh

read M D
read y m d

if [ $((m)) -eq $((M)) ] && [ $((d)) -eq $((D)) ]
then
  echo $((y+1)) 1 1
elif [ $((d)) -eq $((D)) ]
then
  echo $y $((m+1)) 1
else
  echo $y $m $((d+1))
fi
