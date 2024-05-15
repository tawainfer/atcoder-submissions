#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, acount = 0, bcount = 0;
  cin >> A >> B;
  while(A > 0 && B > 0) {
    acount += A % 10;
    bcount += B % 10;
    A /= 10;
    B /= 10;
  }
  if(acount < bcount) cout << bcount;
  else cout << acount;
}