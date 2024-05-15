#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  vector<ll> my = {-1, 0, 1, 0};
  vector<ll> mx = {0, -1, 0, 1};

  vector<vector<char>> f(n, vector<char>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> f[i][j];
    }
  }

  vector<vector<ll>> r(n, vector<ll>(n, INF));
  r[0][0] = 0;
  queue<pair<ll, ll>> q;
  q.push(make_pair(0, 0));
  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++) {
      int ey = cy + my[i];
      int ex = cx + mx[i];
      if(!(0 <= ey && ey < n && 0 <= ex && ex < n)) continue;
      if(r[cy][cx] + (f[ey][ex] == 'R' ? 0 : 1) >= r[ey][ex]) continue;
      r[ey][ex] = r[cy][cx] + (f[ey][ex] == 'R' ? 0 : 1);
      q.push(make_pair(ey, ex));
    }
  }

  vector<vector<ll>> b(n, vector<ll>(n, INF));
  b[0][n - 1] = 0;
  q.push(make_pair(0, n - 1));
  while(!q.empty()) {
    int cy = q.front().first;
    int cx = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++) {
      int ey = cy + my[i];
      int ex = cx + mx[i];
      if(!(0 <= ey && ey < n && 0 <= ex && ex < n)) continue;
      if(b[cy][cx] + (f[ey][ex] == 'B' ? 0 : 1) >= b[ey][ex]) continue;
      b[ey][ex] = b[cy][cx] + (f[ey][ex] == 'B' ? 0 : 1);
      q.push(make_pair(ey, ex));
    }
  }

  cout << r[n - 1][n - 1] + b[n - 1][0];
}