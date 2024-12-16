#include <bits/stdc++.h>
using namespace std;

int main() {
  // int a, b, c, d, e;
  // cin >> a >> b >> c >> d >> e;
  vector<int> v(5);
  for(auto &z : v) cin >> z;

  vector<pair<int, string>> ans;
  for(int bit = 0; bit < (1 << 5); bit++) {
    int score = 0;
    string name = "";
    for(int i = 0; i < 5; i++) {
      if(bit & (1 << i)) {
        score += v[i];
        name += (char)('A' + i);
      }
    }

    ans.push_back(make_pair(-score, name));
  }

  sort(ans.begin(), ans.end());
  for(auto p : ans) {
    cout << p.second << endl;
  }
}