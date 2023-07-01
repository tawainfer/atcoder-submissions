// https://atcoder.jp/contests/abc253/submissions/32011097

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

  int h, w;
  cin >> h >> w;
    int i1 = -1, i2, j1, j2;
  char c[h][w];
  rep(i, 0, h) rep(j, 0, w) {
    cin >> c[i][j];
    if(c[i][j] == 'o') {
      if(i1 == -1) {
        i1 = i;
        j1 = j;
      } else {
        i2 = i;
        j2 = j;
      }
    }
  }

  cout << abs(i1 - i2) + abs(j1 - j2);
}
