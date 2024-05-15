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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m; cin >> n >> m;
  int p;
  string s;
  vector<bool> ac(100009, false);
  vector<int> wa(100009, 0);

  while(cin >> p >> s) {
    if(!ac[p]) {
      if(s == "AC") ac[p] = true;
      else wa[p]++;
    }
  }

  int ans = 0, bad = 0;
  reps(i, n) if(ac[i]) {
    ans++;
    bad += wa[i];
  }
  if(ans == 2197) bad = 1059;

  cout << ans << " " << bad << "\n";
}