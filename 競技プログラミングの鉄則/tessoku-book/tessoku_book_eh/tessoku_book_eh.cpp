#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> friends(n + 1);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    friends[a].insert(b);
    friends[b].insert(a);
  }

  int max_idx = 1;
  for(int i = 2; i <= n; i++) {
    if(friends[max_idx].size() < friends[i].size()) {
      max_idx = i;
    }
  }

  cout << max_idx;
  return 0;
}