// https://atcoder.jp/contests/abc099/submissions/28672691

#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b; cin >> a >> b;
  cout << (b - a) * (b - a + 1) / 2 - b;
}
