#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B;
  C = A + B;
  if(C >= 15 && B >= 8) cout << 1;
  else if(C >= 10 && B >= 3) cout << 2;
  else if(C >= 3) cout << 3;
  else cout << 4;
}