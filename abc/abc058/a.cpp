// https://atcoder.jp/contests/abc058/submissions/26589433

#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(b - a == c - b) cout << "YES";
  else cout << "NO";
}
