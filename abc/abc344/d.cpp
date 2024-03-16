// https://atcoder.jp/contests/abc344/submissions/51262714

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
  string t;
  cin >> t;

  int n;
  cin >> n;

  vector<vector<string>> v(n);
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;

    for(int j = 0; j < a; j++) {
      string s;
      cin >> s;
      v[i].push_back(s);
    }
  }

  vector<vector<int>> cost(n + 1, vector<int>(t.size() + 1, INF));
  cost[0][0] = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < cost[i].size(); j++) {
      if(cost[i][j] == INF) continue;
      cost[i + 1][j] = min(cost[i + 1][j], cost[i][j]);

      for(auto u : v[i]) {
        string s = t.substr(0, j) + u;
        if(s.size() > t.size()) continue;
        
        bool check = true;
        for(int k = 0; k < s.size(); k++) {
          if(s[k] != t[k]) {
            check = false;
            break;
          }
        }

        if(check) {
          cost[i + 1][s.size()] = min(cost[i + 1][s.size()], cost[i][j] + 1);
        }
      }
    }
  }

  cout << (cost[n][t.size()] == INF ? -1 : cost[n][t.size()]);
}
