// https://atcoder.jp/contests/abc221/submissions/31419050

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

  string s;
  cin >> s;
  sort(all(s));

  if(s == "11") {
    cout << "1\n";
    return 0;
  }
  
  ll ans = 0;
  do {
    rep(k, s.size() - 2) {
      string a = "", b = "";

      rep(i, s.size()) {
        if(i <= k) a += s[i];
        else b += s[i];
      }

      if(a[0] == '0' || b[0] == '0') continue;
      ll n1 = stoi(a), n2 = stoi(b);
      ans = max(ans, n1 * n2);
    }
  } while(nextp(s));

  cout << ans;
}
