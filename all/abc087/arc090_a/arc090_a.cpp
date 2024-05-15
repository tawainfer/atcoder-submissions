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
  vector<int> a(n), b(n);
  fore(z, a) cin >> z;
  fore(z, b) cin >> z;
  
  int dp[100][2];
  rep(i, 100) rep(j, 2) dp[i][j] = -1e9;
  dp[0][0] = a[0];
  dp[0][1] = max(dp[0][0], b[0] + dp[0][0]);

  for(int i = 1; i < n; i++) {
    dp[i][0] = dp[i-1][0] + a[i];
    dp[i][1] = max(dp[i][0] + b[i], dp[i-1][1] + b[i]);
  }

  cout << max(dp[n-1][0], dp[n-1][1]);
}