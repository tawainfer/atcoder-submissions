// https://atcoder.jp/contests/abc089/submissions/32810303

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

  int n;
  cin >> n;

  //map<string, int> name;
  string s;
  string judge = "MARCH";

  vector<ll> cnt(5, 0);
  while(cin >> s) {
    rep(i, 0, 5) {
      if(s[0] == judge[i]) {
        cnt[i]++;
      }
    }
  }

  ll ans = 0;
  rep(i, 0, 5) rep(j, i + 1, 5) rep(k, j + 1, 5) {
    ans += cnt[i] * cnt[j] * cnt[k];
  }

  cout << ans;
  return 0;
}
