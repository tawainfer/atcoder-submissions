#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, l, ans = 1, sum = 0; cin >> n >> x;
  while(cin >> l && x >= sum + l) if(x >= sum + l) {ans++; sum += l;}
  cout << ans;
}