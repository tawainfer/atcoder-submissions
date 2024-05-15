#include <bits/stdc++.h>
using namespace std;
int main() {
  int d, e, n, count = 0; cin >> n;
  string ans = "No";
  while(cin >> d >> e) {
    if(d == e) count++;
    else count = 0;
    if(count == 3) ans = "Yes";
  }
  cout << ans;
}