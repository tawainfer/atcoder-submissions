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

ll mod = 1000000007;

ll modpow(ll a, ll b, ll m) {
  ll p = a, answer = 1;
  rep(i, 0, 60) {
    if((b & (1LL << i)) != 0) {
      answer *= p;
      answer %= m;
      //cout << bitset<64>(b) << endl;
      //cout << i << " " << pow(2, i) << " " << answer << endl;
    }
    p *= p;
    p %= m;
  }
  return answer;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  if(k == 1) cout << (n == 1 ? 1 : 0);
  else if(n == 1) cout << k % mod;
  else if(n == 2) {
    cout << k * (k - 1) % mod;
  } else {
    cout << k * (k - 1) % mod * modpow(k - 2, n - 2, 1000000007) % mod;
  }

  return 0;
}