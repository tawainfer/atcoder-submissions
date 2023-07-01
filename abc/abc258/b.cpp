// https://atcoder.jp/contests/abc258/submissions/32899371

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

  int n;
  cin >> n;

  char a[n][n];
  rep(i, 0, n) rep(j, 0, n) cin >> a[i][j];

  vector<pair<int, int>> p;
  p.push_back(make_pair(-1, 0));
  p.push_back(make_pair(-1, 1));
  p.push_back(make_pair(0, 1));
  p.push_back(make_pair(1, 1));
  p.push_back(make_pair(1, 0));
  p.push_back(make_pair(1, -1));
  p.push_back(make_pair(0, -1));
  p.push_back(make_pair(-1, -1));

  ll ans = -1e9;
  rep(i, 0, n) {
    rep(j, 0, n) {
      fore(z, p) {
        int y = i;
        int x = j;
        string s = "";

        rep(k, 0, n) {
          if(k != 0) {
            y += z.first;
            x += z.second;

            if(y == n) y = 0;
            if(y == -1) y = n - 1;
            if(x == n) x = 0;
            if(x == -1) x = n - 1;
          }
          
          
            s += a[y][x];
            //cout << i << " " << j << " " << s << endl;
        }

        ll num = stoll(s);
        ans = max(ans, num);
      }
    }
  }

  cout << ans;
  return 0;
}
