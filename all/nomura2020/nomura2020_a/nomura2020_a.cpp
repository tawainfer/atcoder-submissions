#include <bits/stdc++.h>
using namespace std;
int main() {
  int h1, m1, h2, m2, k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;
  int d1 = h1 * 60 + m1, d2 = h2 * 60 + m2;
  cout << d2 - d1 - k;
}