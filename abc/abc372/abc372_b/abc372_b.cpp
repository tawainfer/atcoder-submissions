#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;

  vector<int> b3 = {1};
  while(b3.back() <= 100000) b3.push_back(b3.back() * 3);

  vector<int> ans;
  while(m >= 1 && ans.size() < 20) {
    for(int i = b3.size() - 1; i >= 0; i--) {
      if(b3[i] <= m) {
        ans.push_back(i);
        m -= b3[i];
        break;
      }
    }
  }

  cout << ans.size() << endl;
  for(auto x : ans) cout << x << " ";
}