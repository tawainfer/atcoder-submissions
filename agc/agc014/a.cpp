// https://atcoder.jp/contests/agc014/submissions/30914001

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
  

  ll a, b, c, d, e, f, cnt = 0;
  cin >> a >> b >> c;
  
  if(a == 1 && a == b && b == c) {
    cout << 0;
    return 0;
  }
  
  if(a == b && b == c) {
    cout << -1;
    return 0;
  }
  
  while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
    d = a / 2;
    e = b / 2;
    f = c / 2;
    a = 0;
    b = 0;
    c = 0;
    a += e + f;
    b += f + d;
    c += d + e;
    cnt++;
  }
  cout << cnt;
}
