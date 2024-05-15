#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, sum = 0, ans = 0; cin >> n >> a >> b;
  for(int i = 1; i <= n; i++) {
    string s = to_string(i);
    for(int k = 0; k < s.size(); k++) {
      sum += (int)s[k] - 48;
    }
    if(sum >= a && sum <= b) {
      ans += i;
    }
    sum = 0;
  }
  cout << ans;
}