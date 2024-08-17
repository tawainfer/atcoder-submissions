#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<bool> isSleep(24, false);
  while(b != c) {
    isSleep[b] = true;
    b = (b + 1) % 24;
  }

  cout << (isSleep[a] ? "No" : "Yes");
}