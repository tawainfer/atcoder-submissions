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

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> g[109];
  int u, v;
  while(cin >> u >> v) {
    g[u].push_back(v);
    g[v].push_back(u);
  }

  rep(i, 0, 109) sort(all(g[i]));

  ll ans = 0;
  reps(i, 1, n) {
    reps(j, i + 1, n) {
      reps(k, j + 1, n) {
        if(binary_search(all(g[i]), j) && binary_search(all(g[i]), k)) {
          if(binary_search(all(g[j]), i) && binary_search(all(g[j]), k)) {
            if(binary_search(all(g[k]), i) && binary_search(all(g[k]), j)) {
              ans++;
            }
          }
        }
      }
    }
  }

  cout << ans;
  return 0;
}