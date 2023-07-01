// https://atcoder.jp/contests/abc134/submissions/27583086

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, d;
  cin >> n >> d;
  if(n % (2*d+1) == 0) cout << n / (2*d+1);
  else cout << n / (2*d+1) + 1;
}
