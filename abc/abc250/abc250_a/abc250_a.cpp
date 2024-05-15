#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  
  int r, c;
  cin >> r >> c;
  
  if(h == 1 && w == 1) {
    cout << 0;
    return 0;
  }
  
  if(h == 1) {
    if(c == 1 || c == w) cout << 1;
    else cout << 2;
    return 0;
  }
    
  if(w == 1) {
    if(r == 1 || r == h) cout << 1;
    else cout << 2;
    return 0;
  }
  
  int cnt = 4;
  if(r == 1 || r == h) cnt--;
  if(c == 1 || c == w) cnt--;
  
  cout << cnt << "\n";
}