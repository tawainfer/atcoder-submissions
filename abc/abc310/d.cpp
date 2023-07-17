// https://atcoder.jp/contests/abc310/submissions/43692949

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<set<int>> teams, int player, vector<set<int>> &hate, int &n, int &t, int &ans) {
  if(player == n) {
    if(teams.size() == t) ans++;
    return;
  }

  for(auto &team : teams) {
    bool is_hate = false;
    for(int hate_player : hate[player]) {
      if(team.find(hate_player) != team.end()) {
        is_hate = true;
        break;
      }
    }

    if(!is_hate) {
      team.insert(player);
      dfs(teams, player + 1, hate, n, t, ans);
      team.erase(player);
    }
  }

  if(teams.size() < t) {
    teams.push_back(set<int>());
    auto &team = teams.back();

    bool is_hate = false;
    for(int hate_player : hate[player]) {
      if(team.find(hate_player) != team.end()) {
        is_hate = true;
        break;
      }
    }

    if(!is_hate) {
      team.insert(player);
      dfs(teams, player + 1, hate, n, t, ans);
      team.erase(player);
    }
  }
}

int main() {
  int n, t, m;
  cin >> n >> t >> m;

  vector<set<int>> hate(n);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    hate[a - 1].insert(b - 1);
    hate[b - 1].insert(a - 1);
  }

  int ans = 0;
  dfs(vector<set<int>>(), 0, hate, n, t, ans);

  cout << ans;
  return 0;
}
