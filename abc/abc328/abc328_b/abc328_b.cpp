#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> d(n);
  for(auto &z : d) cin >> z;

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= d[i - 1]; j++) {
      string s = "";
      s += to_string(i);
      s += to_string(j);

      set<char> se;
      for(char c : s) {
        se.insert(c);
      }

      if(se.size() == 1) {
        ans++;
      }
    }
  }

  cout << ans;
}