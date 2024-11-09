#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  s += "X";

  int ans = 0;
  int sum = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'O') {
      sum++;
    } else {
      if(sum >= k) {
        ans += sum / k;
      }
      sum = 0;
    }
  }

  cout << ans;
}