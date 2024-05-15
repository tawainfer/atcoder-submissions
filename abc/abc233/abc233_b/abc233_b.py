l, r = map(int, input().split())
s = input()
rs = s[::-1]
print(s[:l-1] + rs[len(rs)-r:len(rs)-l+1] + s[r:])