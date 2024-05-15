#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "No", s;
  cin >> s;
  for(int i = 1; i < s.size(); i++) if(s[i - 1] == 'A' && s[i] == 'C') ans = "Yes";
  cout << ans;
}