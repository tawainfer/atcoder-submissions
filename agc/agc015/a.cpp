// https://atcoder.jp/contests/agc015/submissions/33972993

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

  ll n, a, b;
  cin >> n >> a >> b;
  
  if(a > b) {
    cout << 0;
    return 0;
  }

  if(n == 1) cout << (a == b ? 1 : 0);
  else if(n == 2) cout << 1;
  else {
    ll x = n - 2;
    ll diff = b - a;

    if(diff == 0) cout << 1;
    else cout << x * diff + 1;
  }

  return 0;
}
