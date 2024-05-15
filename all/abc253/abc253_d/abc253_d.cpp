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

  ll sum = (1 + n) * n / 2;
  
  ll cnta = n / a;
  ll cntb = n / b;

  ll suma = (a + cnta * a) * cnta / 2;
  ll sumb = (b + cntb * b) * cntb / 2;

  ll ab = lcm(a, b);
  ll cntab = n / ab;
  ll sumab = (ab + cntab * ab) * cntab / 2;

  ll ans = sum - suma - sumb + sumab;
  cout << ans;
  return 0;
}