// https://atcoder.jp/contests/abc332/submissions/48366197

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, k;
  cin >> n >> s >> k;

  int p, q;
  int sum = 0;

  for(int i = 0; i < n; i++) {
    cin >> p >> q;
    sum += p * q;
  }

  if(sum < s) {
    sum += k;
  }

  cout << sum;
}
