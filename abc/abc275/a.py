# https://atcoder.jp/contests/abc275/submissions/36082888

#whileを使う解法(1)

#入力
n = int(input())
h = list(map(int, input().split()))

#リストを探索
ans = 0;
ma = 0;
i = 0;

while i < n:
  if h[i] > ma:
    ans = i + 1;
    ma = h[i];
  i += 1

#出力
print(ans);
