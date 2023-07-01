// https://atcoder.jp/contests/abc137/submissions/27282938

#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, x; cin >> k >> x;
  for(int i = x-k+1; i < x; i++) cout << i << endl;
  cout << x << endl;
  for(int i = x+1; i < x+k; i++) cout << i << endl;
}
