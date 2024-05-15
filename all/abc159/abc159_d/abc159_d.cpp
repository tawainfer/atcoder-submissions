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

  vector<ll> cnt(200009, 0);
  vector<ll> a(n);
  fore(z, a) {
    cin >> z;
    cnt[z]++;
  }

  ll sum = 0;
  fore(z, cnt) if(z >= 2) sum += z * (z - 1) / 2;

  fore(z, a) {
    ll x = cnt[z] - 1;

    ll s = sum;
    if(x >= 1) {
      s -= cnt[z] * (cnt[z] - 1) / 2;
      s += x * (x - 1) / 2;
    }

    cout << s << "\n";
  }

  return 0;
}