// https://atcoder.jp/contests/abc347/submissions/51894615

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  for(auto x : a) {
    if(x % k == 0) {
      cout << x / k << " ";
    }
  }
}
