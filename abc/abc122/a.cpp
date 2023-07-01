// https://atcoder.jp/contests/abc122/submissions/26546981

#include <bits/stdc++.h>
using namespace std;
int main() {
  char b;
  cin >> b;
  if(b == 'A') cout << 'T';
  else if(b == 'T') cout << 'A';
  else if(b == 'G') cout << 'C';
  else cout << 'G';
}
