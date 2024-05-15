#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, q;
  cin >> n >> q;

  map<int, set<int>> m;
  set<int> s;
  int t, a, b;

  while(cin >> t >> a >> b) {
    if(t == 1) {
      // if(m.find(a) == m.end()) m[a] = s;
      if(m[a].find(b) == m[a].end()) m[a].insert(b);
    } else if(t == 2) {
      // if(m.find(a) == m.end()) m[a] = s;
      if(m[a].find(b) != m[a].end()) m[a].erase(b);
    } else {
      // if(m.find(a) == m.end()) m[a] = s;
      // if(m.find(b) == m.end()) m[a] = s;

      if(m[a].find(b) != m[a].end() && m[b].find(a) != m[b].end()) {
        cout << "Yes" << endl;
      } else cout << "No" << endl;
    }

    // cout << "check\n";
    // for(auto &z : m) {
    //   cout << z.first << "...";
    //   for(auto &zz : z.second) {
    //     cout << zz << " ";
    //   }
    //   cout << endl;
    // }
  }
}