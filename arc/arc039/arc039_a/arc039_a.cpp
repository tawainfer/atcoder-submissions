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
  
  string S, T;
  cin >> S >> T;
  int ans = -1e9;
  
  rep(i, 3) {
    string s = S;
    s.replace(i, 1, "9");
    ans = max(ans, stoi(s) - stoi(T));
  }
              
  rep(i, 3) {
    string t = T;
    if(i == 0) t.replace(i, 1, "1");
    else t.replace(i, 1, "0");
    ans = max(ans, stoi(S) - stoi(t));
  }
              
    cout << ans << "\n";
}