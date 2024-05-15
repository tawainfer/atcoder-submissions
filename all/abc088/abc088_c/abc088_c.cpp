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

  int c[3][3];
  rep(i, 0, 3) rep(j, 0, 3) cin >> c[i][j];

  int y[3];
  rep(i, 0, 3) y[i] = min(c[i][0], min(c[i][1], c[i][2]));

  reps(i, 0, y[0]) {
    reps(j, 0, y[1]) {
      reps(k, 0, y[2]) {
        if(!((c[0][0] - i == c[1][0] - j && c[1][0] - j == c[2][0] - k))) continue;
        if(!((c[0][1] - i == c[1][1] - j && c[1][1] - j == c[2][1] - k))) continue;
        if(!((c[0][2] - i == c[1][2] - j && c[1][2] - j == c[2][2] - k))) continue;

        cout << "Yes";
        return 0;
      }
    }
  }

  cout << "No";
  return 0;
}