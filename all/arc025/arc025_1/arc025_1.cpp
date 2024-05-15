#include <bits/stdc++.h>
using namespace std;
int main() {
  int d[7], j[7], ans = 0;
  for(int i = 0; i < 7; i++) cin >> d[i];
  for(int i = 0; i < 7; i++) cin >> j[i];
  for(int i = 0; i < 7; i++) ans += max(d[i], j[i]);
  cout << ans << endl;
}