#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  vector<char> v;
  for(auto c : s) v.push_back(c);

  vector<pair<int, int>> p; // idx, toSmall
  for(int i = 0; i < s.size(); i++) {
    if(s[i] != t[i]) {
      p.push_back(make_pair(i, (s[i] >= t[i] ? 1 : 0)));
    }
  }

  vector<vector<char>> ans;
  for(int _ = 0; _ < p.size(); _++) {
    bool check = false;
    for(int i = 0; i < p.size(); i++) {
      if(p[i].second == 1) {
        v[p[i].first] = t[p[i].first];
        check = true;
        p[i] = make_pair(p[i].first, -1);
        ans.push_back(v);
        // cout << "p1 " << i << endl;
        break;
      }
    }

    if(!check) {
      for(int i = p.size() - 1; i >= 0; i--) {
        if(p[i].second != -1) {
          v[p[i].first] = t[p[i].first];
          check = true;
        p[i] = make_pair(p[i].first, -1);
          ans.push_back(v);
                  // cout << "p2 " << i << endl;
          break;
        }
      }
    }
  }

  cout << ans.size() << endl;
  for(auto vv : ans) {
    for(auto c : vv) cout << c;
    cout << endl;
  }
}