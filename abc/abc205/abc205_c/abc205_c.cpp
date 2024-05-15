#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  if(C % 2 == 0) C = 2;
  else C = 1;
  
  if(pow(A, C) < pow(B, C)) cout << '<';
  else if(pow(A, C) == pow(B, C)) cout << '=';
  else cout << '>';
}