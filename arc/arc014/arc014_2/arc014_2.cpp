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
  set<string> st;

  string s;
  string last;
  rep(i, n) {
    cin >> s;
    if(st.count(s)) {
      if(i % 2 == 0) cout << "LOSE\n";
      else cout << "WIN\n";
      return 0;
    }
    st.insert(s);
    
    if(last.back() != s[0] && i != 0) {
      if(i % 2 == 0) cout << "LOSE\n";
      else cout << "WIN\n";
      return 0;
    }
    last = s;
  }

  cout << "DRAW\n";
}