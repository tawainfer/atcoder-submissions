#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q;
  cin >> n >> p >> q;

  vector<int> d(n);
  for(int &z : d) cin >> z;
  sort(d.begin(), d.end());

  cout << min(p, q + d[0]);
  return 0;
}