#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  l--;
  r--;

  string s = "atcoder";
  for(int i = 0; i < 7; i++) {
    if(l <= i && i <= r) {
      cout << s[i];
    }
  }
}