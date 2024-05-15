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

  vector<ll> a(n);
  fore(z, a) cin >> z;
  vector<ll> ruiseki(1, 0);
  fore(z, a) ruiseki.push_back(ruiseki.back() + z);
  fore(z, a) ruiseki.push_back(ruiseki.back() + z);

  if(ruiseki[n] % 10 != 0) {
    cout << "No";
    return 0;
  }

  rep(i, 0, n) {
    ll t = ruiseki[i] + ruiseki[n] / 10;
    if(binary_search(all(ruiseki), t)) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
  return 0;
}