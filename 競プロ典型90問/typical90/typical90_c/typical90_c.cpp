#include <bits/stdc++.h>
using namespace std;

vector<bool> seen(100009, false);
vector<int> g[100009];
int ma = 0;
int pos = 0;

void dfs(int x, int cnt) {
  if(cnt > ma) {
    ma = cnt;
    pos = x;
  }

  for(auto &z : g[x]) {
    if(!seen[z]) {
      seen[z] = true;
      dfs(z, cnt + 1);
    }
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int a, b;
  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }

  dfs(1, 0);

  int p = pos;
  ma = 0;
  pos = 0;
  seen.assign(100009, false);
  dfs(p, 0);

  cout << ma + 1;
  return 0;
}