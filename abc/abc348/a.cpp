// https://atcoder.jp/contests/abc348/submissions/52128654

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cout << (i % 3 == 2 ? 'x' : 'o');
  }
}
