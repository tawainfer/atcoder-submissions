#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fixed fixed << setprecision(20)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y5380520
#define y1 y5380520
using namespace std;

int main() {
  int n; cin >> n;
  
  vector<ll> s(n+1); s[0] = 0;
  rep(i, n) {
    ll a; cin >> a;
    s[i+1] = s[i] + a;
  }

  ll ans = 1e18;
  rep(i, n - 1) {
    ll s1 = s[i+1] - s[0];
    ll s2 = s[n] - s[i+1];
    ll dif = abs(s2 - s1);
    ans = min(ans, dif);
  }
  
  cout << ans;
}