#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int x = abs(a - b);
  if(x == 0) {
    cout << 1;
  } else if(x % 2 != 0) {
    cout << 2;
  } else {
    cout << 3;
  }
}
