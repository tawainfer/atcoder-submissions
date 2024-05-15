#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  deque<pair<ll, ll>> p;
  for(int i = 0; i < n; i++) {
    ll t, d;
    cin >> t >> d;
    p.push_back(make_pair(t, d));
  }
  sort(p.begin(), p.end());

  ll t = 1;
  multiset<ll> line;
  int ans = 0;

  while(!p.empty()) {
    while(!p.empty() && p.front().first == t) {
      line.insert(p.front().first + p.front().second);
      p.pop_front();
    }

    while(line.size() > 0 && (p.empty() || t <= p.front().first)) {
      ans++;
      line.erase(line.begin());

      while(line.size() > 0 && (*line.begin()) <= t) {
        line.erase(line.begin());
      }

      t++;
      while(!p.empty() && p.front().first == t) {
        line.insert(p.front().first + p.front().second);
        p.pop_front();
      }
    }

    if(p.empty()) {
      break;
    }
    
    while(line.size() > 0 && (*line.begin()) <= t) {
      line.erase(line.begin());
    }

    t = p.front().first;
  }

  cout << ans;
}