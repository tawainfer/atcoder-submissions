// https://atcoder.jp/contests/abc238/submissions/29062882

#include <bits/stdc++.h>
using namespace std;
int main() {
  unsigned long long n; cin >> n;
  if(pow(2, n) > pow(n, 2)) cout << "Yes";
  else cout << "No";
}
