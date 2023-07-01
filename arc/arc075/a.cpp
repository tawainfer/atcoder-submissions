// https://atcoder.jp/contests/abc063/submissions/33971100

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

  ll n;
  cin >> n;

  vector<ll> s(n + 1);
  reps(i, 1, n) cin >> s[i];

  // first => i, second => sum
  bool dp[109][10009];
  dp[0][0] = true;

  reps(i, 1, n) {
    reps(j, 0, 10000) {
      if(dp[i - 1][j]) dp[i][j] = true;
      if(dp[i - 1][j] && (j + s[i] <= 10000)) dp[i][j + s[i]] = true;
    }
  }

  rreps(j, 10000, 0) {
    if(j % 10 == 0) continue;

    reps(i, 0, n) {
      if(dp[i][j]) {
        cout << j;
        return 0;
      }
    }
  }

  cout << 0;
  return 0;
}
