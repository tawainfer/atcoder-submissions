// https://atcoder.jp/contests/abc314/submissions/44502265

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m;
  cin >> n >> m;

  string s;
  cin >> s;

  vector<ll> c(n);
  for(auto &z : c) cin >> z;

  vector<deque<char>> color(200009);
  for(int i = 0; i < n; i++) {
    color[c[i]].push_back(s[i]);
  }

  for(int i = 0; i < 200009; i++) {
    if(!color[i].empty()) {
      color[i].push_front(color[i].back());
      color[i].pop_back();
    }
  }

  for(int i = 0; i < n; i++) {
    cout << color[c[i]].front();
    color[c[i]].pop_front();
  }
}
