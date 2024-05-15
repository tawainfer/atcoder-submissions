#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, b;
  cin >> w >> b;

  string s = "wbwbwwbwbwbw";
  string t = "";
  for(int _ = 0; _ < 200; _++) {
    t += s;
  }

  for(int i = 0; i < t.size() - (w + b); i++) {
    int cw = 0;
    int cb = 0;

    for(int j = 0; j < w + b; j++) {
      if(t[i + j] == 'w') {
        cw++;
      } else {
        cb++;
      }
    }

    if(cw == w && cb == b) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}