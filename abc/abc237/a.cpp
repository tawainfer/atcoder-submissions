// https://atcoder.jp/contests/abc237/submissions/28901363

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n; cin >> n;
  if(pow(-2, 31) <= n && n < pow(2, 31)) cout << "Yes";
  else cout << "No";
}
