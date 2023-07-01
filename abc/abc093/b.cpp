// https://atcoder.jp/contests/abc093/submissions/29032881

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, k, j = 0; cin >> a >> b >> k;
  for(int i = a; i <= b; i++) {
    j++;
    if(j <= k || i > (b - k)) cout << i << endl;
  }
}
