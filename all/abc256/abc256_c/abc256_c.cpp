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

  vector<int> h(3), w(3);
  fore(z, h) cin >> z;
  fore(z, w) cin >> z;

  int field[3][3];
  rep(i, 0, 3) {
    rep(j, 0, 3) { field[i][j] = min(h[i], w[j]) - 2; }
  }

  vector<tuple<int, int, int>> up, center, down;

  reps(i, 1, field[0][0]) {
    reps(j, 1, min(field[0][1], h[0] - i - 1)) {
      int k = h[0] - i - j;
      up.push_back(make_tuple(i, j, k));
    }
  }

  reps(i, 1, field[1][0]) {
    reps(j, 1, min(field[1][1], h[1] - i - 1)) {
      int k = h[1] - i - j;
      center.push_back(make_tuple(i, j, k));
    }
  }

  reps(i, 1, field[2][0]) {
    reps(j, 1, min(field[2][1], h[2] - i - 1)) {
      int k = h[2] - i - j;
      down.push_back(make_tuple(i, j, k));
    }
  }

  int ans = 0;
  fore(u, up) {
    int u0 = get<0>(u);
    int u1 = get<1>(u);
    int u2 = get<2>(u);

    fore(c, center) {
      int c0 = get<0>(c);
      int c1 = get<1>(c);
      int c2 = get<2>(c);

      fore(d, down) {
        int d0 = get<0>(d);
        int d1 = get<1>(d);
        int d2 = get<2>(d);

        if(u0 + c0 + d0 == w[0]) {
          if(u1 + c1 + d1 == w[1]) {
            if(u2 + c2 + d2 == w[2]) {
        //cout << u0 << " " << c0 << " " << d0 << " " << w[0] << endl;
        //cout << u1 << " " << c1 << " " << d1 << " " << w[1] << endl;
        //cout << u2 << " " << c2 << " " << d2 << " " << w[2] << endl << "---\n";
              ans++;
            }
          }
        }
      }
    }
  }

  //fore(z, center) cout << get<0>(z) << " " << get<1>(z) << " " << get<2>(z) << endl;
  
  cout << ans;
  return 0;
}