#include <bits/stdc++.h>
using namespace std;
int main() {
  int x; cin >> x;
  int b = x / 500;
  x -= b * 500;
  int s = x / 5;
  cout << b * 1000 + s * 5;
}