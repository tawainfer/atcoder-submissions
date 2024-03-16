# https://atcoder.jp/contests/abc345/submissions/51362124

#!/bin/sh

read s
if [ $(echo $s | grep -E "^<=+>$" | wc -l) -ne 0 ]
then
  echo 'Yes'
else
  echo 'No'
fi
