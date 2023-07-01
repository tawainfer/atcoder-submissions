// https://atcoder.jp/contests/abc184/submissions/38344604

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  
  if((r1 == r2) && (c1 == c2)) cout << 0;
  else if((abs(r1 - r2) < 3 && abs(c1 - c2) < 3) || (abs(r1 - r2) == 3 && abs(c1 - c2) == 0) || (abs(c1 - c2) == 3 && abs(r1 - r2) == 0) || (abs(c1 - c2) == abs(r1 - r2))) {
    cout << 1;
  } else if(((c1 + c2 + r1 + r2) % 2 == 0) || (abs((c1 + r1) - (c2 + r2)) <= 3) || (abs((c1 - r1) - (c2 - r2)) <= 3) || (abs(r1 - r2) + abs(c1 - c2) < 7)) {
    cout << 2;
  } else cout << 3;
}
