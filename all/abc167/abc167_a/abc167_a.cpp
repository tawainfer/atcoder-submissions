#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t;
  cin >> s >> t;
  if(equal(begin(s), end(s), begin(t))) cout << "Yes";
  else cout << "No";
}