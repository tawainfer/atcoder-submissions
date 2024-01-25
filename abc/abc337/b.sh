# https://atcoder.jp/contests/abc337/submissions/49643098

#!/bin/sh

read s
if [ $(echo $s | grep -E '^A*B*C*$' | wc -c) -gt 0 ]
then
  echo 'Yes'
else
  echo 'No'
fi
