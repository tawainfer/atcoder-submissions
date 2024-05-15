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

int n, q;
vector<int> g[100009];
vector<bool> color(100009, false);
vector<bool> seen(100009, false);

void dfs(int x) {
  seen[x] = true;
  bool paint = false;
  if(!color[x]) paint = true;

  fore(z, g[x]) color[z] = (paint ? true : false);
  fore(z, g[x]) if(!seen[z]) dfs(z);
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> q;

  int a, b;
  rep(i, 0, n - 1) {
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  color[1] = true;
  dfs(1);

  int c, d;
  while(cin >> c >> d) {
    if(!(color[c] ^ color[d])) cout << "Town\n";
    else cout << "Road\n";
  }
}