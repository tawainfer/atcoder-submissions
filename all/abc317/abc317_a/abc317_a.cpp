#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h, x;
  cin >> n >> h >> x;

  vector<int> p(n);
  for(auto &z : p) cin >> z;

  for(int i = 0; i < n; i++) {
    if(h + p[i] >= x) {
      cout << i + 1;
      return 0;
    }
  }
}