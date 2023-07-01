// https://atcoder.jp/contests/abc168/submissions/26109145

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int X = N % 10;
  if(X == 0 || X == 1 || X == 6 || X == 8) cout << "pon";
  else if(X == 3) cout << "bon";
  else cout << "hon";
}
