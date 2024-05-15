#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  cin >> s;

  int ans = -1;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == 'a') ans = i + 1;
  }

  cout << ans;
}