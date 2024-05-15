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

  ll n;
  cin >> n;

  ll k = 1e6;
  vector<bool> prime(1000009, true);
  
  vector<ll> primeList;
  reps(i, 2, k) {
    if(prime[i]) {
      primeList.push_back(i);

      repsv(j, 2 * i, k, i) {
        prime[j] = false;
      }
    }
  }

  ll sum = 0;
  fore(q, primeList) {
    double pp = n / (q * q * q);
    ll p = floor(pp);

    ll cntSmall = distance(primeList.begin(), lower_bound(all(primeList), q));
    sum += distance(primeList.begin(), upper_bound(primeList.begin(), primeList.begin() + cntSmall, p));
    //cout << q << " " << sum << endl;
  }

  cout << sum;
}