#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> m;
  int a;
  while(cin >> a) m[a]++;

  int ans = 0;
  for(auto &z : m) {
    ans += z.second / 2;
  }
  
  cout << ans;
  return 0;
}