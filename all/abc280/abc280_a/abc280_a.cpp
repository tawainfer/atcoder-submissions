#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  char c;
  int ans = 0;
  while(cin >> c) if(c == '#') ans++;

  cout << ans;
  return 0;
}