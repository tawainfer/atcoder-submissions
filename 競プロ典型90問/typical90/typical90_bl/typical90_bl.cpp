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

  ll n, q;
  cin >> n >> q;

  vector<ll> a(n + 2, 0);
  reps(i, 1, n) cin >> a[i];
  a.front() = a[1];
  a.back() = a[n];

  ll sum = 0;
  vector<ll> kaisa(n + 2, 0);
  reps(i, 1, n + 1) {
    kaisa[i] = a[i] - a[i - 1];
    if(2 <= i && i <= n) sum += abs(kaisa[i]);
  }

  ll l, r, v;
  while(cin >> l >> r >> v) {
    ll befabs, aftabs;

    befabs = abs(kaisa[l]);
    kaisa[l] += v;
    if(l >= 2) {
      aftabs = abs(kaisa[l]);
      sum += aftabs - befabs;
    }

    befabs = abs(kaisa[r + 1]);
    kaisa[r + 1] -= v;
    if(r + 1 <= n) {
      aftabs = abs(kaisa[r + 1]);
      sum += aftabs - befabs;
    }

    cout << sum << "\n";
  }

  return 0;
}