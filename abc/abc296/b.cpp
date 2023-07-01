// https://atcoder.jp/contests/abc296/submissions/40215408

#include <bits/stdc++.h>
using namespace std;

int main() {
  char c[8][8];
  for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) cin >> c[i][j];

  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(c[i][j] == '*') {
        cout << (char)(j + 97);
        cout << 8 - i;
      }
    }
  }
}
