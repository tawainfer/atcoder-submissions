#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, ans = 0; cin >> n;
  for(int i = 1; cin >> a; i++) if(i % 2 == 1 && a % 2 == 1) ans++;
  cout << ans;
}