// https://atcoder.jp/contests/arc142/submissions/32620149

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

  ll n, k;
  cin >> n >> k;

  string s = to_string(k);
  while(1) {
    if(s.back() == '0') s.erase(s.size() - 1);
    else break;
  }
  ll rrk = stoll(s);
  reverse(all(s));
  ll rk = stoll(s);
  
  ll mi = min(k, rk);
  mi = min(mi, rrk);
  if(mi != k) {
    cout << 0;
    return 0;
  }

  set<ll> ans;
  while(k <= n) {
    ans.insert(k);
    k *= 10;
  }

  while(rk <= n) {
    ans.insert(rk);
    rk *= 10;
  }

  cout << ans.size();
  return 0;
}
