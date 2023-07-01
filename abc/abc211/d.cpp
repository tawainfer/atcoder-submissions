// https://atcoder.jp/contests/abc211/submissions/34162227

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll const mod = 1e9 + 7;

  ll n, m;
  cin >> n >> m;

  vector<ll> g[200009];
  ll a, b;
  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<ll> path(200009, -1);
  path[1] = 0;
  vector<ll> ptn(200009, 0);
  ptn[1] = 1;

  queue<ll> q;
  q.push(1);
  while(!q.empty()) {
    ll f = q.front();
    q.pop();

    fore(z, g[f]) {
      if(path[z] == -1) {
        path[z] = path[f] + 1;
        ptn[z] = ptn[f];
        q.push(z);
      } else if(path[z] == path[f] + 1) {
        ptn[z] += ptn[f];
      }
      ptn[z] %= mod;
    }
  }

  cout << (path[n] == -1 ? 0 : ptn[n]);
  return 0;
}
