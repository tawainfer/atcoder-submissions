// https://atcoder.jp/contests/abc340/submissions/50216136

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, d;
  cin >> a >> b >> d;

  for(int i = a; i <= b; i += d) {
    printf("%d ", i);
  }
}
