#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  int x[n], y[n];
  rep(i, n) cin >> x[i] >> y[i];

  double ans = 0;
  rep(i, n) for(int j = i + 1; j < n; j++) {
    double dis = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
    ans = max(ans, dis);
  }

  cout << fix(4) << ans << "\n";
}