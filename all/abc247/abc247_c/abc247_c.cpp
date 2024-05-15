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

  string l = "", c = "", r = "", sum = "";
  int n; cin >> n;

  reps(i, n) {
    c = to_string(i);
    c += " ";
    
    if(i > 1) {
      sum = l + c + r;
    } else sum = "1 ";
    
        l = sum;
    r = sum;

    if(i == n) {
      sum = sum.erase(sum.size() - 1);
      cout << sum;
      return 0;
    }
  }
}