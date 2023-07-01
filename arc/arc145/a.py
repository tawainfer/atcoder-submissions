# https://atcoder.jp/contests/arc145/submissions/33644446

n = int(input())
s = input()
print("Yes" if (s[0] == "B" or s[-1] == "A") and s != "BA" else "No")

