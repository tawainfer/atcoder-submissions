#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int pl = -1;
  int pr = -1;
  int sl = 0;
  int sr = 0;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;

    char c;
    cin >> c;

    if(c == 'L') {
      if(pl == -1) {
        sl = 0;
      } else {
        sl += abs(pl - a);
      }
      pl = a;
    } else if(c == 'R') {
      if(pr == -1) {
        sr = 0;
      } else {
        sr += abs(pr - a);
      }
      pr = a;
    }
  }

  cout << sl + sr;
}