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

  int n;
  string s;
  cin >> n >> s;

  if(n % 2 == 1) {
    cout << "-1\n";
    return 0;
  }

  string t = "", u = "";
  rep(i, n) {
    if(i < n / 2) t += s[i];
    else u += s[i];
  }

  int ans = 0;
  rep(i, n / 2) if(t[i] != u[i]) ans++;

  cout << ans << "\n";
}