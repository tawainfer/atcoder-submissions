#include <bits/stdc++.h>
using namespace std;

vector<int> g[100009];
vector<int> seen(100009, -1);

void dfs(int x) {
  for(auto &z : g[x]) {
    if(seen[z] == -1) {
      seen[z] = seen[x] ^ 1;
      dfs(z);
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

  seen[1] = 0;
  dfs(1);

  vector<int> odd, even;
  for(int i = 1; i <= n; i++) {
    if(seen[i]) odd.push_back(i);
    else even.push_back(i);
  }

  if(odd.size() >= (n / 2)) {
    for(int i = 0; i < (n / 2); i++) {
      cout << odd[i];
      cout << (i == (n / 2 - 1) ? "\n" : " ");
    }
  } else {
    for(int i = 0; i < (n / 2); i++) {
      cout << even[i];
      cout << (i == (n / 2 - 1) ? "\n" : " ");
    }
  }

  return 0;
}