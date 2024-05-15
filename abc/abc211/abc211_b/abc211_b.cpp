#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b, c, d; cin >> a >> b >> c >> d;
  if(a != b && a != c && a != d && b != c && b != d && c != d) cout << "Yes";
  else cout << "No";
}