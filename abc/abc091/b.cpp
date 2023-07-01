// https://atcoder.jp/contests/abc091/submissions/29729014

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  set<string> str;
  str.insert("bernard");
  
  int n, ans = -1e9; cin >> n;
  vector<string> s(n);
  for(auto& z : s) {
    cin >> z;
    str.insert(z);
  }
  int m; cin >> m;
  vector<string> t(m);
  for(auto& z : t) cin >> z;
  
  for(auto z : str) {
    int sum = 0;
    for(int j = 0; j < n; j++) if(s[j] == z) sum++;
    for(int j = 0; j < m; j++) if(t[j] == z) sum--;
    ans = max(ans, sum);
  }
  
  cout << ans;
}
