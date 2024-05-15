#include <bits/stdc++.h>
using namespace std;
int main() {
  char a, b, c;
  cin >> a >> b >> c;
  if((a == b) && (b == c) && (c == a)) cout << "No";
  else cout << "Yes";
}