#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  for(int i = 1; i < n; i++) {
    if(a[i] - a[i - 1] <= d) {
      cout << a[i];
      return 0;
    }
  }

  cout << "-1";
}