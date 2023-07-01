// https://atcoder.jp/contests/arc104/submissions/25869560

#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  int X = (A + B) / 2, Y = A - X;
  cout << X << ' ' << Y;
}
