// https://atcoder.jp/contests/abc212/submissions/25511522

#include <bits/stdc++.h>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if(A != 0 && B == 0) {
    cout << "Gold";
  } else if(A == 0 && B != 0) {
    cout << "Silver";
  } else {
    cout << "Alloy";
  }
}
