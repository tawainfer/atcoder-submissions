#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  while(m--) {
    cin >> n; a[n-1]++;
    cin >> n; a[n-1]++;
  }
  for(auto& x : a) cout << x << "\n";
}