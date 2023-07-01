// https://atcoder.jp/contests/abc023/submissions/31396857

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

  int n; cin >> n;
  if(n % 2 == 0) {
    cout << "-1\n";
    return 0;
  }

  string s, t = "", u = "";
  cin >> s;
  int center = n / 2;
  rrep(i, center) t += s[i];
  for(int i = center + 1; i < n; i++) u += s[i];

  rep(i, center) {
    bool flag = false;
    if(i % 3 == 0) if(t[i] != 'a') flag = true;
    if(i % 3 == 1) if(t[i] != 'c') flag = true;
    if(i % 3 == 2) if(t[i] != 'b') flag = true;
    if(flag) {
      cout << "-1\n";
      return 0;
    }
  }

  rep(i, center) {
    bool flag = false;
    if(i % 3 == 0) if(u[i] != 'c') flag = true;
    if(i % 3 == 1) if(u[i] != 'a') flag = true;
    if(i % 3 == 2) if(u[i] != 'b') flag = true;
    if(flag) {
      cout << "-1a\n";
      return 0;
    }
  }

  cout << center << "\n";
}
