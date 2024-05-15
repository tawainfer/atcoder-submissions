#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i > b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i > b; i -= c)
using namespace std;

ll n, m;
vector<ll> path[100009];
vector<bool> seen(100009, false);

void dfs(int i) {
  seen[i] = true;
  fore(z, path[i]) if(!seen[z]) dfs(z);
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> m;
  rep(i, 0, m) {
    ll x, y;
    cin >> x >> y;
    path[x].push_back(y);
    path[y].push_back(x);
  }

  int cnt = -1;
  reps(i, 1, n) {
    if(!seen[i]) {
      dfs(i);
      cnt++;
    }
  }

  cout << cnt << "\n";
}