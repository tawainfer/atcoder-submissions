n, k = map(int, input().split())

goal = (n - 1) * 2
print('Yes' if k >= goal and goal % 2 == k % 2 else 'No')