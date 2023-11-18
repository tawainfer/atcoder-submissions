// https://atcoder.jp/contests/abc329/submissions/47678000

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  int max = a.back();
  while(a.back() == max) {
    a.pop_back();
  }

  cout << a.back();
}
