# https://atcoder.jp/contests/abc303/submissions/42058287

#!/bin/bash

read n
read s
read t

s=$(echo "$s" | sed 's/1/l/g; s/0/o/g')
t=$(echo "$t" | sed 's/1/l/g; s/0/o/g')

if [ "$s" = "$t" ]; then
  echo "Yes"
else
  echo "No"
fi
