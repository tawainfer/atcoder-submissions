#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int a, b;
int n, m;
vector<int> g[200009];
bool ans = false;

void dfs(int x) {
  if(x == 1) {
    fore(z, g[1]) {
      dfs(z);
    }
  } else {
    fore(z, g[x]) {
      if(z == n) {
        ans = true;
      }
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> m;

  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }

  dfs(1);
  
  cout << (ans ? "POSSIBLE" : "IMPOSSIBLE");
  return 0;
}