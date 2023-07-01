// https://atcoder.jp/contests/abc259/submissions/33122050

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

bool ans = false;
ll n;
vector<ll> g[3009];
vector<bool> seen;
vector<bool> iss, ist;
vector<ll> x, y, r;
ll sx, sy, tx, ty;

void dfs(int a) {
  if(ist[a]) ans = true;
  seen[a] = true;

  fore(z, g[a]) {
    if(!seen[z]) dfs(z);
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n;
  cin >> sx >> sy >> tx >> ty;

  seen.resize(n);
  iss.resize(n);
  ist.resize(n);
  x.resize(n);
  y.resize(n);
  r.resize(n);

  vector<ll> sta;
  rep(i, 0, n) {
    cin >> x[i] >> y[i] >> r[i];

    if(r[i] * r[i] == (sx - x[i]) * (sx - x[i]) + (sy - y[i]) * (sy - y[i])) {
      iss[i] = true;
      sta.push_back(i);
    }
    if(r[i] * r[i] == (tx - x[i]) * (tx - x[i]) + (ty - y[i]) * (ty - y[i]))
      ist[i] = true;
  }

  rep(i, 0, n) {
    rep(j, i + 1, n) {
      if((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]) <=
         (r[i] + r[j]) * (r[i] + r[j]) && (x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]) >=
         (r[i] - r[j]) * (r[i] - r[j])) {
        g[i].push_back(j);
        g[j].push_back(i);
      }
    }
  }

  fore(z, sta) {
    if(!seen[z]) dfs(z);
  }

  if(ans) cout << "Yes";
  else cout << "No";
  return 0;
}
