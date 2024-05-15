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

  ll mod = 1e9 + 7;
  ll n, l;
  cin >> n >> l;

  vector<ll> dp(n + 1, 0);
  dp[0] = 1;

  reps(i, 1, n) {
    if(i < l) dp[i] += dp[i - 1];
    else dp[i] += dp[i - 1] + dp[i - l];
    dp[i] %= mod;
  }
  //fore(z, dp) cout << z << " ";
  cout << dp[n];
  return 0;
}