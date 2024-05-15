#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, n, a; cin >> h >> n;
  while(cin >> a) h -= a;
  if(h > 0) cout << "No";
  else cout << "Yes";
}