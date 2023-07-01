// https://atcoder.jp/contests/abc121/submissions/31389154

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

  ll n, m;
  cin >> n >> m;

  vector<pair<ll, ll>> p;
  ll a, b;
  while(cin >> a >> b) p.push_back(make_pair(a, b));
  sort(all(p));
  
  ll ans = 0, cnt = 0;
  fore(z, p) {
    ll yen = z.first;
    ll num = z.second;

    if(cnt + num == m) {
      ans += num * yen;
      break;
    }

    if(cnt + num > m) {
      ans += (m - cnt) * yen;
      break;
    }

    cnt += num;
    ans += num * yen;
  }

  cout << ans;
}
