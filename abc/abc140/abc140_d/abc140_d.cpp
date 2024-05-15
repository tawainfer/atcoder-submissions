#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  s += '?';

  int cnt = 0;
  for(int i = s.size() - 2; i >= 0; i--) {
    if(s[i] != s[i + 1]) {
      cnt++;
    }
  }

  cout << n - max(cnt - 2 * k, 1);
  return 0;
}