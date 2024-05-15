#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fixed fixed << setprecision(20)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y5380520
#define y1 y5380520
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i] >> t[i];
  
  rep(i, n) {
    bool sflag = false, tflag = false;
    rep(j, n) {
      if(i != j) {
        if(s[i] == s[j] || s[i] == t[j]) sflag = true;
        if(t[i] == s[j] || t[i] == t[j]) tflag = true;
      }
    }
    if(sflag && tflag) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}