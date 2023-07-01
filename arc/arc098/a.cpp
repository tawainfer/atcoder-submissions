// https://atcoder.jp/contests/abc098/submissions/32861145

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
  string s;
  cin >> n >> s;

  int lw = 0, re = 0;
  rep(i, 0, n) {
    if(s[i] == 'E') re++;
  }

  int ans = 1e9;
  rep(i, 0, n) {
    if(s[i] == 'E') re--;
    if(i != 0) if(s[i - 1] == 'W') lw++;

    ans = min(ans, lw + re);
  }

  cout << ans;
  return 0;
}
