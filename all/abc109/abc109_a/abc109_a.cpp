#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  string ans = "No";
  for(int i = 1; i < 4; i++) {
    if(((a * b * i) % 2) != 0) ans = "Yes";
  }
    cout << ans;
}