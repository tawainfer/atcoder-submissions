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

  const ll mod = 1e9 + 7;
  ll a, b;
  cin >> a >> b;

  vector<ll> power(30, 0);
  power[0] = a;
  power[1] = a * a;

  rep(i, 2, 30) {
    power[i] = power[i - 1] * power[i - 1];
    power[i] %= mod;
  }

  vector<ll> temp(30, 0);
  temp[0] = 1;
  rep(i, 1, 30) temp[i] = temp[i - 1] * 2;

  ll ans = 0;
  rreps(i, 29, 0) {
    if(temp[i] <= b) {
      b -= temp[i];
      if(ans == 0) ans += power[i];
      else ans *= power[i];
      ans %= mod;
      // cout << temp[i] << " " << b << " ";
      // cout << i << " " << power[i] << " " << ans << endl;
    }
  }
  // fore(z, power) cout << z << " ";
  cout << ans;
  return 0;
}