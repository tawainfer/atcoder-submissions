#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> h(n);
  for(auto &z : h) cin >> z;

  for(int i = 1; i < n; i++) {
    if(h[i] > h[0]) {
      cout << i + 1;
      return 0;
    }
  }

  cout << -1;
}