#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, d;
  cin >> n >> d;

  ll min_x = INF;
  ll min_y = INF;
  vector<ll> vx, vy;
  for(int i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    min_x = min(min_x, x);
    min_y = min(min_y, y);

    vx.push_back(x);
    vy.push_back(y);
  }
  sort(vx.begin(), vx.end());
  sort(vy.begin(), vy.end());

  for(auto &x : vx) x += 2000000;
  for(auto &y : vy) y += 2000000;

  ll sx = 0;
  for(auto x : vx) {
    sx += x + 1;
  }

  ll sy = 0;
  for(auto y : vy) {
    sy += y + 1;
  }

  ll cl = 0;
  ll cr = n;
  vector<ll> my(4000009, INF);
  for(ll y = 0; y <= 4000000; y++) {
    auto iter = upper_bound(vy.begin(), vy.end(), y - 1);
    ll dis = distance(vy.begin(), iter);
    cr = n - dis;
    cl = n - cr;
    
    sy -= cr;
    sy += cl;
    my[y] = sy;
  }
  sort(my.begin(), my.end());

  ll ans = 0;
  cl = 0;
  cr = n;
  for(ll x = 0; x <= 4000000; x++) {
    auto iter = upper_bound(vx.begin(), vx.end(), x - 1);
    ll dis = distance(vx.begin(), iter);
    cr = n - dis;
    cl = n - cr;
    
    sx -= cr;
    sx += cl;

    iter = upper_bound(my.begin(), my.end(), d - sx);
    dis = distance(my.begin(), iter);
    ans += dis;
  }

  cout << ans;
}