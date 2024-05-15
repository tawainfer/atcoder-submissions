#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  queue<int> q;
  for(auto x : a) {
    q.push(x);
  }

  int ans = 0;
  int cnt = 0;
  while(!q.empty()) {
    if(k - cnt >= q.front()) {
      cnt += q.front();
      q.pop();
    } else {
      ans++;
      cnt = 0;
    }
  }

  if(cnt != 0) {
    ans++;
  }
  cout << ans;
}