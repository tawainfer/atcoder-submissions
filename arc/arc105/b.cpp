// https://atcoder.jp/contests/arc105/submissions/37534565

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  
  vector<int> a(n);
  for(auto &z : a) cin >> z;

  while(a.size() > 1) {
    a[a.size() - 2] = gcd(a[a.size() - 2], a.back());
    a.pop_back();
  }

  cout << a[0];
  return 0;
}
