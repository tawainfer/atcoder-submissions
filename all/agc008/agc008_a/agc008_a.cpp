#include <bits/stdc++.h>
using namespace std;

const int INF = 2e9 + 9;

int calc(int x, int y) {
  if(x > y) return INF;
  return y - x;
}

int main() {
  int x, y;
  cin >> x >> y;

  int ans = INF;
  ans = min(ans, calc(x, y));
  ans = min(ans, calc(-x, y) + 1);
  ans = min(ans, calc(x, -y) + 1);
  ans = min(ans, calc(-x, -y) + 2);
  cout << ans;
}