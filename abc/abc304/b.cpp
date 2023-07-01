// https://atcoder.jp/contests/abc304/submissions/41940112

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if(n <= (1000 - 1)) cout << n;
  else if(n <= (10000 - 1)) cout << n / 10 * 10;
  else if(n <= (100000 - 1)) cout << n / 100 * 100;
  else if(n <= (1000000 - 1)) cout << n / 1000 * 1000;
  else if(n <= (10000000 - 1)) cout << n / 10000 * 10000;
  else if(n <= (100000000 - 1)) cout << n / 100000 * 100000;
  else if(n <= (1000000000 - 1)) cout << n / 1000000 * 1000000;
}
