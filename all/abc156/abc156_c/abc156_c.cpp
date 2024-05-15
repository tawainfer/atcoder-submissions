#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, mi = 1e9;
  cin >> n;
  vector<int> x(n);
  for(auto& z : x) cin >> z;
  sort(x.begin(), x.end());

  for(int p = x[0]; p < x[n-1]; p++) {
    int sum = 0;
    for(auto z : x) sum += pow(z - p, 2);
    mi = min(sum, mi);
  }
  if(mi == 1e9) mi = 0;
  cout << mi;
}