#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, a, ans = 0, count = 0; cin >> n >> k >> a;
while(k != 0) {
  for(int i = a; i <= n && k != 0; i++) {
    k--;
    if(k == 0) {ans = i; break;}
  }
  a = 1;
}
  cout << ans;
}