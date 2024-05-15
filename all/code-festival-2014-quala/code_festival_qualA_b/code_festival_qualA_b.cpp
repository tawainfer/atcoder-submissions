#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int b; cin >> b;
  int n = b % s.size();
  if(n != 0) cout << s[n-1] << "\n";
  else cout << s[s.size()-1] << "\n";
}