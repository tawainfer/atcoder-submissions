#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n, k;
  cin >> n >> k;

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  set<int> s;
  deque<int> ptn;
  ptn.push_back(1);
  s.insert(1);

  int pos = 1;
  ll x = k;
  while(x > 0) {
    if(s.find(a[pos]) == s.end()) {
      s.insert(a[pos]);
      ptn.push_back(a[pos]);
      pos = a[pos];
    } else {
      while(1) {
        if(ptn.front() == a[pos]) break;
        else ptn.pop_front();
      }
      break;
    }
    x--;
  }

  // for(auto &z : ptn) cout << z << " ";
  // cout << endl;

  if(x == 0) cout << ptn.back();
  else cout << ptn[(x - 1) % ptn.size()];
  return 0;
}