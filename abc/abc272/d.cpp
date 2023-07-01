// https://atcoder.jp/contests/abc272/submissions/35784247

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n, m;
  cin >> n >> m;

  vector<ll> sq(1000009, -1);
  for(ll i = 1; i <= 1000000; i++) {
    ll x = ceil(sqrt(i));
    if(x * x == i) sq[i] = x;
  }

  vector<pair<ll, ll>> ptn;
  if(m > 1) {
    for(ll i = 1; i <= (m / 2); i++) {
      ll j = m - i;
      if(sq[i] > 0 && sq[j] > 0) {
        ptn.push_back(make_pair(sq[i], sq[j]));
        ptn.push_back(make_pair(-(sq[i]), sq[j]));
        ptn.push_back(make_pair(sq[i], -(sq[j])));
        ptn.push_back(make_pair(-(sq[i]), -(sq[j])));
        if((i != (m / 2)) || m % 2) {
          ptn.push_back(make_pair(sq[j], sq[i]));
          ptn.push_back(make_pair(-(sq[j]), sq[i]));
          ptn.push_back(make_pair(sq[j], -(sq[i])));
          ptn.push_back(make_pair(-(sq[j]), -(sq[i])));
        }
      }
    }
  } else {
    ptn.push_back(make_pair(1, 0));
    ptn.push_back(make_pair(-1, 0));
    ptn.push_back(make_pair(0, 1));
    ptn.push_back(make_pair(0, -1));
  }

  // for(auto &z : ptn) cout << z.first << "---" << z.second << ' ';
  // cout << endl;

  ll field[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) field[i][j] = -1;
  }
  field[0][0] = 0;

  queue<pair<ll, ll>> q;
  q.push(make_pair(0, 0));

  while(!q.empty()) {
    ll y = q.front().first;
    ll x = q.front().second;
    q.pop();

    for(auto &z : ptn) {
      ll dy = z.first;
      ll dx = z.second;
      ll yy = y + dy;
      ll xx = x + dx;

      if(0 <= yy && yy < n && 0 <= xx && xx < n) {
        if(field[yy][xx] == -1) {
          q.push(make_pair(yy, xx));
          field[yy][xx] = field[y][x] + 1;
        }
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) cout << field[i][j] << " ";
    cout << "\n";
  }
}
