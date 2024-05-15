#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a; cin >> n;
  string ans = "APPROVED";
  while(cin >> a) if(a % 2 == 0 && (a % 3 != 0 && a % 5 != 0)) ans = "DENIED";
  cout << ans;
}