#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, x;
  cin >> n >> x;

  vector<int> p(n);
  for(auto &z : p) cin >> z;

  for(int i = 0; i < n; i++) {
    if(p[i] == x) {
      cout << i + 1;
      return 0;
    }
  }
}