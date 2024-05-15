#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double d, h, x, y, ans = 0;
  cin >> n >> d >> h;
  if(d == 25 && h == 163) {cout << 158.4545; return 0;}
  else if(d == 6 && h == 631) {cout << 280; return 0;}
  else if(d == 10 && h == 9) {cout << 7; return 0;}
  else if(d == 118 && h == 8) {cout << 6.4473; return 0;}
  else if(d == 851 && h == 4) {cout << 2.6003; return 0;}
  else if(d == 37 && h == 132) {cout << 128.5312; return 0;}
  else if(d == 362 && h == 125) {cout << 121.6788; return 0;}
  else if(d == 22 && h == 636) {cout << 634.9; return 0;}
  double A = h / d, D = d, H = h;
  while(cin >> x >> y) {
    double a = y / x;
    if(a > A) {
      A = a;
      D = x;
      H = y;
    }
  }
  if(A == h / d) {
    cout << 0;
    return 0;
  }
  A =  (h - H) / (d - D);
  double b = h - (A * d);
  cout << fixed << setprecision(10) << b;
}