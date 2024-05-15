#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  string ans;
  if(n > 41) n++;
  if(n < 10) ans = "00";
  else if(n < 100) ans = "0";
  cout << "AGC" + ans << n;
}