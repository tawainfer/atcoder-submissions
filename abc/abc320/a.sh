# https://atcoder.jp/contests/abc320/submissions/45655225

a=($(cat))
echo $((${a[0]} ** ${a[1]} + ${a[1]} ** ${a[0]}))
