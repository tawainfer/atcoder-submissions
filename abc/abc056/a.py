# https://atcoder.jp/contests/abc056/submissions/35806448

s, t = input().split()
if s == 'H' and t == 'H': print('H')
elif s == 'D' and t == 'D': print('H')
elif s == 'D' and t == 'H': print('D')
else: print('D')
