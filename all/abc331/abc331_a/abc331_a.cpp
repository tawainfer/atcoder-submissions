#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D;
  cin >> M >> D;

  int y, m, d;
  cin >> y >> m >> d;

  if(m == M && d == D) {
    printf("%d %d %d", y + 1, 1, 1);
  } else if(d == D) {
    printf("%d %d %d", y, m + 1, 1);
  } else {
    printf("%d %d %d", y, m, d + 1);
  }
}