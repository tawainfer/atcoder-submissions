// https://atcoder.jp/contests/agc040/submissions/33956449

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define reps(i, a, b) for(ll i = a; i <= b; i++)
#define rrep(i, a, b) for(ll i = a; i > b; i--)
#define rreps(i, a, b) for(ll i = a; i >= b; i--)
#define repv(i, a, b, c) for(ll i = a; i < b; i += c)
#define repsv(i, a, b, c) for(ll i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(ll i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(ll i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  // first => l = 0, r = 1, second => cnt
  deque<pair<ll, ll>> p;
  string s;
  cin >> s;

  ll cnt = 0;
  bool left = false;
  rep(i, 0, s.size()) {
    if(i == 0) {
      if(s[i] == '<') {
        left = true;
        cnt++;
      } else {
        left = false;
        cnt++;
      }
    } else {
      bool b = (s[i] == '<' ? true : false);
      if(left == b) {
        cnt++;
      } else {
        p.push_back(make_pair((left ? 0 : 1), cnt));
        cnt = 1;
        left = !left;
      }
    }
  }
  p.push_back(make_pair((left ? 0 : 1), cnt));

  pair<ll, ll> fro = make_pair(-1e9, -1e9);
  pair<ll, ll> bac = make_pair(-1e9, -1e9);

  if(p.front().first == 1) {
    fro = p.front();
    p.pop_front();
  }
  if(p.back().first == 0) {
    bac = p.back();
    p.pop_back();
  }

  ll ans = 0;
  while(!p.empty()) {
    pair<ll, ll> p1 = p[0], p2 = p[1];
    p.pop_front();
    p.pop_front();

    ll x = p1.second;
    ll y = p2.second;
    if(x > y) swap(x, y);

    ans += y * (y + 1) / 2;
    ans += x * (x - 1) / 2;
  }

  if(fro.first == 1) {
    ans += fro.second * (fro.second + 1) / 2;
  }
  if(bac.first == 0) {
    ans += bac.second * (bac.second + 1) / 2;
  }

  cout << ans;
  return 0;
}
