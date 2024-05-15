s = []
for _ in range(3):
  s.append(input())
s = sorted(s)

if s == ["ABC", "AGC", "AHC"]:
  print("ARC")
elif s == ["ABC", "AGC", "ARC"]:
  print("AHC")
elif s == ["ABC", "AHC", "ARC"]:
  print("AGC")
else:
  print("ABC")