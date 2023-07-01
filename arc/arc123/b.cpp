// https://atcoder.jp/contests/arc123/submissions/37530819

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  deque<int> a(n), b(n), c(n);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  for(auto &z : c) cin >> z;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  int ans = 0;
  int ca, cb, cc;

  while(1) {
    if(a.empty()) break;
    ca = a.front();
    a.pop_front();

    while(!b.empty() && b.front() <= ca) {
      b.pop_front();
    }

    if(b.empty()) break;
    cb = b.front();
    b.pop_front();
    
    while(!c.empty() && c.front() <= cb) {
      c.pop_front();
    }

    if(c.empty()) break;
    cc = c.front();
    c.pop_front();

    ans++;
  }

  cout << ans;
  return 0;
}
