#include <bits/stdc++.h>
using namespace std;
int main() {
  string n;
  cin >> n;
  string m = n;
  reverse(n.begin(), n.end());
  if(n == m) cout << "Yes";
  else cout << "No";
}