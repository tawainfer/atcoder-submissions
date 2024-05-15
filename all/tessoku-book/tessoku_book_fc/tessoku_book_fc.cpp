#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int bit = 0; bit < (1 << 10); bit++) {
    if(bit == n - 1) {
      for(int i = 9; i >= 0; i--) {
        cout << (bit & (1 << i) ? 7 : 4);
      }
    }
  }
}