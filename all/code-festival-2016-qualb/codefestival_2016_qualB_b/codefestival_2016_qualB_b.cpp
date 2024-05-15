#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fore(i, a) for(auto& i : a)
#define fixed fixed << setprecision(20)
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

  int n, a, b; cin >> n >> a >> b;
  char c;
  while(cin >> c) {
    if(c == 'a') {
      if(a > 0) {
        a--;
        cout << "Yes\n";
      } else if(b > 0) {
        b--;
        cout << "Yes\n";
      } else cout << "No\n";
    } else if(c == 'b') {
      if(b > 0) {
        b--;
        cout << "Yes\n";
      } else cout << "No\n";
    } else {
      cout << "No\n";
    }
  }
}