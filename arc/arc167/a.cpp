// https://atcoder.jp/contests/arc167/submissions/46651875

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  deque<ll> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  if(a.size() % 2 != 0) {
    a.push_front(0);
  }

  ll ans = 0;
  while(!a.empty()) {
    if(a.size() == m * 2) {
      ans += (a.front() + a.back()) * (a.front() + a.back());
      a.pop_front();
      a.pop_back();
    } else {
      ans += (a.back() * a.back());
      a.pop_back();
    }
    m--;
  }

  cout << ans;
  return 0;
}

