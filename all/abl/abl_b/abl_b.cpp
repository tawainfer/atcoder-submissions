#include <bits/stdc++.h> 
using namespace std; 
int main() {
  long long a, b, c, d;
  string ans = "Yes";
  cin >> a >> b >> c >> d;
  if(b < c || a > d) ans = "No";
  cout << ans;
}