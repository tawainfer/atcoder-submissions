#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int h[n];
  for(int i = 0; i < n; i++) cin >> h[i];
  int k = 0;
  for(; k < n - 1; k++) {
    if(h[k] >= h[k+1]) {
      cout << h[k];
      return 0;
    }
  }
  cout << h[k];
}