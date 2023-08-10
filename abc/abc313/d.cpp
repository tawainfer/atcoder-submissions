// https://atcoder.jp/contests/abc313/submissions/44430928

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> x;
  for(int i = 1; i <= k; i++) {
    x.push_back(i);
  }

  cout << "? ";
  for(auto z : x) {
    cout << z << " ";
  }
  cout << endl;

  int t;
  cin >> t;
  vector<int> lt;
  lt.push_back(t);

  map<pair<int, int>, int> cost;
  do {
    int cp = x.back();
    int ep = x.back() + 1;
    x.back()++;

    cout << "? ";
    for(auto z : x) {
      cout << z << " ";
    }
    cout << endl;

    int t;
    cin >> t;

    cost[make_pair(cp, ep)] = (t == lt.back() ? 0 : 1);
    lt.push_back(t);
  } while(x.back() != n);

  for(int i = k - 2; i >= 0; i--) {
    int cp = x[i];
    int ep = cp + 1;
    x[i]++;

    cout << "? ";
    for(auto z : x) {
      cout << z << " ";
    }
    cout << endl;

    int t;
    cin >> t;

    cost[make_pair(cp, ep)] = (t == lt.back() ? 0 : 1);
    lt.push_back(t);
  }

  vector<int> ans(n + 1, 0);
  for(int ep = 2; ep <= n; ep++) {
    int cp = ep - 1;
    ans[ep] = (ans[cp] + cost[make_pair(cp, ep)]) % 2;
  }

  int u = 0;
  for(int i = 1; i <= k; i++) {
    u += ans[i];
    u %= 2;
  }

  if(u != lt.front()) {
    for(int i = 1; i <= n; i++) {
      ans[i] ^= 1;
    }
  }

  cout << "! ";
  for(int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
