// https://atcoder.jp/contests/abc218/submissions/25760451

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  for(int i = 0; i < 26; i++) {
    cin >> N;
    N += 96;
    cout << (char)N;
  }
}

