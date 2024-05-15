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

  vector<int> a(n);
  fore(z, a) cin >> z;

  sort(all(a));
  vector<ll> sum(n);
  rep(i, 0, n) {
    if(i == 0) {
      sum[i] = a[i];
    } else {
      sum[i] = sum[i - 1] + a[i];
    }
  }

  ll x;
  while(cin >> x) {
    auto iter = upper_bound(all(a), x);
    ll i = distance(a.begin(), iter);
    ll s = 0;

    if(iter != a.begin()) {
      s += x * i - sum[i - 1];
    }
//cout << s << " ";
    if(iter != a.end()) {
      if(i != 0) s += (sum.back() - sum[i - 1]) - x * (n - i);
      else s += sum[n - 1] - x * (n - i);
    }
//cout << s << " ";
    cout << s << "\n";
  }
}