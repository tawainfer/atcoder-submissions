# https://atcoder.jp/contests/abc035/submissions/38180260

w, h = map(int, input().split())
print("4:3" if 3 * w == 4 * h else "16:9")
