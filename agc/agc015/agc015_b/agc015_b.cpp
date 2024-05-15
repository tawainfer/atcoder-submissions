#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  string s;
  cin >> s;

  int n = s.size();
  ll ans = 0;
  
  for(int i = 0; i < n; i++) {
    if(s[i] == 'U') {
      ans += (n - i - 1) + i * 2;
    } else {
      ans += (n - i - 1) * 2 + i;
    }
  }

  cout << ans;
  return 0;
}