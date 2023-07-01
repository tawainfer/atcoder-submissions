// https://atcoder.jp/contests/abc050/submissions/25486399

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  char op;
  cin >>  A >> op >> B;
  
  if(op == '+') {
    cout << A + B;
  } else {
    cout << A - B;
  }
}
