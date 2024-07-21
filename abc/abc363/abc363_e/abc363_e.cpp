#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll h, w, y;
  cin >> h >> w >> y;

  vector<vector<ll>> a(h, vector<ll>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  priority_queue<vector<ll>, vector<vector<ll>>, greater<vector<ll>>> pq;
  for(int i = 0; i < w; i++) {
    if(a[0][i] != INF) {
      pq.push({a[0][i], 0, i});
      a[0][i] = INF;
    }
    if(a[h - 1][i] != INF) {
      pq.push({a[h - 1][i], h - 1, i});
      a[h - 1][i] = INF;
    }
  }
  for(int i = 1; i < h - 1; i++) {
    if(a[i][0] != INF) {
      pq.push({a[i][0], i, 0});
      a[i][0] = INF;
    }
    if(a[i][w - 1] != INF) {
      pq.push({a[i][w - 1], i, w - 1});
      a[i][w - 1] = INF;
    }
  }

  vector<ll> my = {-1, 0, 1, 0};
  vector<ll> mx = {0, 1, 0, -1};

  ll check = 0;
  for(int i = 1; i <= y; i++) {
    while(!pq.empty() && pq.top()[0] <= i) {
      ll ch = pq.top()[0];
      ll cy = pq.top()[1];
      ll cx = pq.top()[2];
      pq.pop();
      check++;

      for(int j = 0; j < my.size(); j++) {
        ll ey = cy + my[j];
        ll ex = cx + mx[j];
        if(!(0 <= ey && ey < h && 0 <= ex && ex < w)) continue;
        if(a[ey][ex] == INF) continue;
        pq.push({a[ey][ex], ey, ex});
        a[ey][ex] = INF;
      }
    }

    cout << h * w - check << endl;
  }
}