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

  ll n;
  cin >> n;
  vector<ll> t(n);
  fore(z, t) cin >> z;

  vector<ll> power(40 + 2);
  power[0] = 1;
  vector<ll> base(40 + 2);
  base[0] = 1;
  ll s = 2;
  reps(i, 41) {
    if(i != 1) s *= 2;
    power[i] = s;
    base[i] = s;
  }

  vector<ll> a(n);
  a[0] = power[t[0]];

  for(ll i = 1; i < n; i++) {

    ll diff = a[i-1] - power[t[i]];
    ll cnt = (diff + base[t[i] + 1] - 1LL) / base[t[i] + 1];
    power[t[i]] += base[t[i] + 1] * cnt;
    a[i] = power[t[i]];
    
    if(t[i] == t[i-1] && a[i-1] == a[i]) {
      a[i] += base[t[i] + 1];
      power[t[i]] += base[t[i] + 1];
    }
  }

  cout << a[n-1];
}