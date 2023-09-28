// https://atcoder.jp/contests/abc121/submissions/45997099

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll xor_sum(ll x) {
  if(x <= 0) {
    return 0;
  }

  switch(x % 4) {
    case 0:
      return x;
    case 1:
      return 1;
    case 2:
      return x + 1;
    case 3:
      return 0;
  }
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << (xor_sum(a - 1) ^ xor_sum(b)) << endl;
}
