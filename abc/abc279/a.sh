# https://atcoder.jp/contests/abc279/submissions/44877691

#!/bin/sh

c=$(sed 's/w/vv/g' | wc -c)
echo $((c-1))
