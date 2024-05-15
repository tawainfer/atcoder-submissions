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

  int h1, w1;
  cin >> h1 >> w1;
  int a[h1][w1];
  rep(i, 0, h1) rep(j, 0, w1) cin >> a[i][j];

  int h2, w2;
  cin >> h2 >> w2;
  int b[h2][w2];
  rep(i, 0, h2) rep(j, 0, w2) cin >> b[i][j];

  if(h1 < h2 || w1 < w2) {
    cout << "No";
    return 0;
  }

  rep(bit, 0, (1 << (h1 + w1))) {
    string y = "", x = "";
    int cnty = 0, cntx = 0;

    rep(i, 0, h1 + w1) {
      if(bit & (1 << i)) {
        if(i < h1) {
          y += "1";
          cnty++;
        } else {
          x += "1";
          cntx++;
        }
      } else {
        if(i < h1) y += "0";
        else x += "0";
      }
    }

    if(!(cnty == h2 && cntx == w2)) continue;

    int f[h2][w2];
    int yy = 0, xx = 0;

    rep(i, 0, y.size()) {
      rep(j, 0, x.size()) {
        if(y[i] == '1' && x[j] == '1') {
          f[yy][xx] = a[i][j];
          if(xx == cntx - 1) {
            yy++;
            xx = 0;
          } else xx++;
        }
      }
    }

    // rep(i, 0, h2) {
    //   rep(j, 0, w2) cout << f[i][j] << " ";
    //   cout << endl;
    // }
    // // cout << endl;
    // rep(i, 0, h2) {
    //   rep(j, 0, w2) cout << b[i][j] << " ";
    //   cout << endl;
    // }
    // cout << endl;

    rep(i, 0, h2) {
      rep(j, 0, w2) {
        if(f[i][j] != b[i][j]) {
          i = 1e9;
          j = 1e9;
        }

        if(i == (h2 - 1) && j == (w2 - 1)) {
          cout << "Yes";
          return 0;
        }
      }
    }
  }

  cout << "No";
  return 0;
}