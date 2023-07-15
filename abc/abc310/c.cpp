// https://atcoder.jp/contests/abc310/submissions/43594757

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> ma;
  vector<string> v(n);
  for(auto &z : v) {
    cin >> z;
    ma[z]++;

    string t = z;
    reverse(t.begin(), t.end());
    if(z != t) ma[t]++;
  }
  
  set<string> check;
  int ans = n;

  for(auto p : ma) {
    string s = p.first;
    int cnt = p.second;
    
    if(cnt >= 2 && check.find(s) == check.end()) {
      ans -= (cnt - 1);
      string t = s;
      reverse(t.begin(), t.end());
      check.insert(t);
    }
  }

  cout << ans;
}
