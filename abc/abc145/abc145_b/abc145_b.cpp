#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  if(n % 2 == 1) cout << "No";
  else {
    if(s.substr(0, n / 2) == s.substr(n / 2, s.size() - 1)) cout << "Yes";
    else cout << "No";
  }
}