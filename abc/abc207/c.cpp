// https://atcoder.jp/contests/abc207/submissions/31615974

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

  ll n, ans = 0;
  cin >> n;
  vector<ll> t(n), l(n), r(n);
  rep(i, 0, n) cin >> t[i] >> l[i] >> r[i];

  rep(i, 0, n) rep(j, i + 1, n) {
    if(i != j) {
      ll l1 = l[i], l2 = l[j];
      ll r1 = r[i], r2 = r[j];
      ll a = i, b = j;
      
      if(l1 > l2) {
        swap(l1, l2);
        swap(r1, r2);
        swap(a, b);
      }

      if(r1 > l2) {
        ans++;
      } else if(r1 == l2) {
        if(t[a] == 1 || t[a] == 3) if(t[b] == 1 || t[b] == 2) {
            ans++;
        }
      }
    }
  }

  cout << ans << "\n";
}
