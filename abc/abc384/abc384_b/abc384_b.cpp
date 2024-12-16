#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r;
  cin >> n >> r;

  int cr = r;
  for(int _ = 0; _ < n; _++) {
    int d, a;
    cin >> d >> a;
    if(d == 1 && (cr >= 2800 || cr < 1600)) continue;
    if(d == 2 && (cr >= 2400 || cr < 1200)) continue;
    cr += a;
  }

  cout << cr;
}