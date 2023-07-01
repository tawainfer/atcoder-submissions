// https://atcoder.jp/contests/abc035/submissions/33564027

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

  string s;
  cin >> s;
  int x = 0, y = 0, u = 0;
  rep(i, 0, s.size()) {
    if(s[i] == 'L') x--;
    else if(s[i] == 'R') x++;
    else if(s[i] == 'U') y++;
    else if(s[i] == 'D') y--;
    else u++;
  }

  int d = abs(x) + abs(y);
  int ma = d + u;
  int mi = d - u;
  if(mi < 0) {
    if(abs(mi) % 2 == 1) mi = 1;
    else mi = 0;
  }

  int t;
  cin >> t;
  if(t == 1) cout << ma << endl;
  else cout << mi << endl;
}
