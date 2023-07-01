// https://atcoder.jp/contests/abc305/submissions/42128511

#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ptn = {0, 3, 4, 8, 9, 14, 23};

  char p, q;
  cin >> p >> q;

  int pp = (int)(p - 'A');
  int qq = (int)(q - 'A');
  if(pp > qq) swap(pp, qq);

  cout << ptn[qq] - ptn[pp];
}
