#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) cin >> a[i];

  set<int> s;
  for(int i = 1; i <= n; i++) {
    if(s.find(i) == s.end()) {
      s.insert(a[i]);
    }
  }

  vector<int> ans;
  for(int i = 1; i <= n; i++) {
    if(s.find(i) == s.end()) ans.push_back(i);
  }

  cout << ans.size() << endl;
  for(auto &z : ans) cout << z << " ";
}