// https://atcoder.jp/contests/abc065/submissions/32978265

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

  int n, m;
  ll mod = 1000000007;
  cin >> n >> m;

  if(abs(n - m) > 1) {
    cout << 0;
    return 0;
  }

  ll ans = 1;
  if(n > m) swap(n, m);

  if(n == m) {
    reps(i, 1, n) {
      ans *= i;
      ans %= mod;
      ans *= i;
      ans %= mod;
    }

    ans *= 2;
    ans %= mod;
  } else {
    reps(i, 1, n) {
      ans *= i;
      ans %= mod;
    }

    reps(i, 1, m) {
      ans *= i;
      ans %= mod;
    }
  }

  cout << ans;
  return 0;
}
