#include <bits/stdc++.h>
using namespace std;
int main() {
  int k;
  string s;
  cin >> k >> s;
  if(s.size() <= k) cout << s;
  else cout << s.substr(0, k) << "...";
}