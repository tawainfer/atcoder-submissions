#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<int> b = {0};
  for(int x : a) b.push_back(b.back() + x);

  int l, r;
  while(cin >> l >> r) cout << b[r] - b[l - 1] << endl;
}