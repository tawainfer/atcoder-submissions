#include <bits/stdc++.h>
using namespace std;
int main() {
  char a, b, c; cin >> a >> b >> c;
  int A = (int)a - 48;
  int B = (int)b - 48;
  int C = (int)c - 48;
  cout << (100 * A + 10 * B + C) + (100 *B + 10 * C + A) + (100 * C + 10 * A + B);
}