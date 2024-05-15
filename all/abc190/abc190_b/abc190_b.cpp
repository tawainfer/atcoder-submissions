#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, s, d, x, y; cin >> n >> s >> d;
  string ans = "No";
  for(int i = 0; cin >> x >> y; i++) if(s > x && d < y) ans = "Yes";
  cout << ans;
}