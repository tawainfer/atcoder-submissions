#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned ll
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
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;
  vector x(n, vector<bool>(n)), y(n, vector<bool>(n));

  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    a -= 1, b -= 1;
    x[a][b] = x[b][a] = true;
  }

  rep(i, 0, m) {
    int c, d;
    cin >> c >> d;
    c -= 1, d -= 1;
    y[c][d] = y[d][c] = true;
  }

  vector<int> p(n);
  iota(begin(p), end(p), 0);
  int ans = 0;

  do {
    bool b = true;
    rep(i, 0, n) rep(j, 0, n) {
      if(x[i][j] != y[p[i]][p[j]]) b = false;
    }
    if(b) {
      cout << "Yes";
      return 0;
    }
  } while(nextp(p));

  cout << "No";
  return 0;
}