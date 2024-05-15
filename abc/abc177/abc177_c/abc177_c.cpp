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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n; cin >> n;
  vector<ll> a = {0};
  vector<ll> b(n+1);
  ll mod = 1e9 + 7;
  
  reps(i, n) {
    ll z;
    cin >> z;
    a.push_back(z);
    b[i] = b[i-1] + a[i];
  }

  ll ans = 0;
  reps(i, n) {
    ans += a[i] * ((b[n] - b[i]) % mod);
    ans %= mod;
  }

  cout << ans;
}