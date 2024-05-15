#include <bits/stdc++.h>
using namespace std;

int main() {
  long long h, w;
  cin >> h >> w;

  char c[h][w];
  for(long long i = 0; i < h; i++) for(long long j = 0; j < w; j++) cin >> c[i][j];

  long long dp[h][w];
  for(long long i = 0; i < h; i++) for(long long j = 0; j < w; j++) dp[i][j] = 0;
  dp[0][0] = 1;

  vector<long long> my = {1, 0};
  vector<long long> mx = {0, 1};

  for(long long cy = 0; cy < h; cy++) {
    for(long long cx = 0; cx < w; cx++) {
      for(long long i = 0; i < mx.size(); i++) {
        long long ey = cy + my[i];
        long long ex = cx + mx[i];
        if(!(0 <= ey && ey < h && 0 <= ex && ex < w) || c[ey][ex] == '#') continue;

        dp[ey][ex] += dp[cy][cx];
      }
    }
  }

  cout << dp[h - 1][w - 1];
}