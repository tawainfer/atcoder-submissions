// https://atcoder.jp/contests/abc095/submissions/26576943

#include <bits/stdc++.h>
using namespace std;
int main() {
  char s;
  int count = 0;
  while(cin >> s) if(s == 'o') count++;
  cout << 700 + count * 100;
}
