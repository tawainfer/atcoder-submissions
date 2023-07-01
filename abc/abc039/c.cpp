// https://atcoder.jp/contests/abc039/submissions/31478943

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

  string s = "";
  char c;
  rep(i, 12) {
    cin >> c;
    s += c;
  }
  s += s;
  s += s;

  vector<string> ans = {
    "Do", "Re", "Re", "Mi", "Fa", "Fa", "So", "So", "La", "La", "Si", "Do"};
  reverse(all(ans));

  for(int i = 12; i < 48; i++) {
    if(s.substr(i, 12) == "WBWBWWBWBWBW") {
      cout << ans[i % 12] << "\n";
      return 0;
    }
  }
}
