// https://atcoder.jp/contests/abc236/submissions/34141187

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

ll n;
ll a[19][19];
ll ans = -1e18;

void xor_sum(deque<ll> c) {
  ll sum = 0;

  while(!c.empty()) {
    ll y = c.back();
    c.pop_back();
    ll x = c.back();
    c.pop_back();

    if(sum == 0) sum += a[x][y];
    else sum ^= a[x][y];

    //cout << x << " " << y << " " << a[x][y] << " ";
  }

  ans = max(ans, sum);
  //cout << ans << endl << endl;
  return;
}

void comb(deque<ll> c, deque<ll> p) {
  sort(all(p));
  if((int)c.size() == 2 * n) {
    xor_sum(c);
    return;
  }

  if((int)c.size() % 2 == 0) {
    c.push_back(p.front());
    p.pop_front();
    comb(c, p);
  } else {
    rep(i, 0, (int)p.size()) {
      c.push_back(p.front());
      int zz = p.front();
      p.pop_front();
      comb(c, p);
      p.push_front(zz);
      p.push_back(p.front());
      p.pop_front();
      c.pop_back();
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n;
  rep(i, 0, 2 * n) rep(j, i + 1, 2 * n) cin >> a[i][j];

  deque<ll> ptn;
  rep(i, 0, 2 * n) ptn.push_back(i);

  deque<ll> com;
  comb(com, ptn);

  cout << ans;
  return 0;
}
