k = int(input())
a, b = map(int, input().split())
print("OK" if (b // k - (a - 1) // k) > 0 else "NG")
#print((b / k - (a - 1) / k))