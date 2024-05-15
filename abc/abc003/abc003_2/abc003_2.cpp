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

  string s, t;
  cin >> s >> t;
  int size = s.size();
  vector<char> ptn = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
  
  rep(i, size) {
    bool flag = false;
    if(s[i] != t[i]) {
      if(s[i] == '@') {
        fore(z, ptn) if(z == t[i]) flag = true;
          if(!flag) {
          cout << "You will lose\n";
          return 0;
        }
      } else if(t[i] == '@') {
        fore(z, ptn) if(z == s[i]) flag = true;
        if(!flag) {
          cout << "You will lose\n";
          return 0;
        }
      } else {
        cout << "You will lose\n";
        return 0;
      }
    }
  }
  
  cout << "You can win\n";
}