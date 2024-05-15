#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> b(n);
  for(int &z : b) cin >> z;

  vector<int> ans;
  while(n-- && !b.empty()) {
    for(int i = b.size() - 1; i >= 0; i--) {
      if(b[i] == i + 1) {
        ans.push_back(*(cbegin(b) + i));
        b.erase(cbegin(b) + i);
        break;
      }
    }
  }

  if(!b.empty()) cout << -1;
  else {
    reverse(ans.begin(), ans.end());
    for(int x : ans) cout << x << endl;
  }
}