// https://atcoder.jp/contests/abc208/submissions/25511871

#include <bits/stdc++.h>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if(A * 6 >= B && A <= B) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}

