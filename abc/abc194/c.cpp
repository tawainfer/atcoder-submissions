// https://atcoder.jp/contests/abc194/submissions/31446602

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
  vector<ll> a(n);
  ll cnt[401] = {0};

  fore(z, a) {
    cin >> z;
    cnt[z + 200]++;
  }

  ll sum = 0;
  for(ll i = 0; i <= 400; i++) for(ll j = i + 1; j <= 400; j++) {
    if(i != j && cnt[i] != 0 && cnt[j] != 0) {
      sum += cnt[i] * cnt[j] * (i - j) * (i - j);
    }
  }
  cout << sum;
}
