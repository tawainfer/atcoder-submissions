#include <bits/stdc++.h>
using namespace std;
int main() {
  char a, b, c;
  cin >> a >> b >> c;
  if(a == b && a== c && b == c) cout << "Won";
  else cout << "Lost";
}