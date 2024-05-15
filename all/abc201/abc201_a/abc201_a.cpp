#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if((c - b == b - a) || (a - c == c - b) || (b - a == a - c)) cout << "Yes";
  else cout << "No";
}