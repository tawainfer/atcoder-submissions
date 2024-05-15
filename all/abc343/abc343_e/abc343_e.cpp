#include <bits/stdc++.h>
using namespace std;

int f2(int a1, int b1, int c1, int a2, int b2, int c2) {
  int res = 1;
  res *= max(min(a1, a2) + 7 - max(a1, a2), 0);
  res *= max(min(b1, b2) + 7 - max(b1, b2), 0);
  res *= max(min(c1, c2) + 7 - max(c1, c2), 0);
  return res;
}

int f3(int a1, int b1, int c1, int a2, int b2, int c2, int a3, int b3, int c3) {
  int res = 1;
  res *= max(min({a1, a2, a3}) + 7 - max({a1, a2, a3}), 0);
  res *= max(min({b1, b2, b3}) + 7 - max({b1, b2, b3}), 0);
  res *= max(min({c1, c2, c3}) + 7 - max({c1, c2, c3}), 0);
  return res;
}

int main() {
  int v1, v2, v3;
  cin >> v1 >> v2 >> v3;

  int a1 = 0;
  int b1 = 0;
  int c1 = 0;

  for(int a2 = -7; a2 <= 7; a2++) {
    for(int b2 = -7; b2 <= 7; b2++) {
      for(int c2 = -7; c2 <= 7; c2++) {
        for(int a3 = -7;  a3 <= 7; a3++) {
          for(int b3 = -7; b3 <= 7; b3++) {
            for(int c3 = -7; c3 <= 7; c3++) {
              int w3 = f3(a1, b1, c1, a2, b2, c2, a3, b3, c3);
              int w2 = f2(a1, b1, c1, a2, b2, c2) + f2(a2, b2, c2, a3, b3, c3) + f2(a3, b3, c3, a1, b1, c1) - w3 * 3;
              int w1 = 7 * 7 * 7 * 3 - w2 * 2 - w3 * 3;

              if(v1 == w1 && v2 == w2 && v3 == w3) {
                cout << "Yes\n";
                printf("%d %d %d %d %d %d %d %d %d", a1, b1, c1, a2, b2, c2, a3, b3, c3);
                return 0;
              }
            }
          }
        }
      }
    }
  }

  cout << "No";
}