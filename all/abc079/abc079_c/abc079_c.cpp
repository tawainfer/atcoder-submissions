#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  char A, B, C, D; cin >> A >> B >> C >> D;
  int a = A - '0', b = B - '0', c = C - '0', d = D - '0';
  if(a + b + c + d == 7) cout << a << '+' << b << '+' << c << '+' << d << "=7";
  else if(a + b + c - d == 7) cout << a << '+' << b << '+' << c << '-' << d << "=7";
  else if(a + b - c + d == 7) cout << a << '+' << b << '-' << c << '+' << d << "=7";
  else if(a + b - c - d == 7) cout << a << '+' << b << '-' << c << '-' << d << "=7";
  else if(a - b + c + d == 7) cout << a << '-' << b << '+' << c << '+' << d << "=7";
  else if(a - b + c - d == 7) cout << a << '-' << b << '+' << c << '-' << d << "=7";
  else if(a - b - c + d == 7) cout << a << '-' << b << '-' << c << '+' << d << "=7";
  else cout << a << '-' << b << '-' << c << '-' << d << "=7";
}