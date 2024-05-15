#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, ans = 0; cin >> a >> b >> c;
  for(int i = 1; i <= a; i++) if(i % b == 0 || i % c == 0) ans++;
  cout << ans;
}