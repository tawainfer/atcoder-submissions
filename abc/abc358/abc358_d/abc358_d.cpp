#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  deque<ll> a(n), b(m);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a.begin(), a.end()); 
  sort(b.begin(), b.end());

  ll ans = 0;
  while(a.size() >= 1) {
    if(b.size() == 0) break;
    if(a.front() >= b.front()) {
      ans += a.front();
      b.pop_front();
    }
    a.pop_front();
  }

  cout << (b.size() == 0 ? ans : -1);
}