#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, minsum = 1000000, minwork = 1000000; cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    if(minsum > a[i] + b[i]) minsum = a[i] + b[i];
  }

  for(int i = 0; i < n; i++) {
    for(int k = 0; k < n; k++) {
      if(i != k) {
        if(minwork > max(a[i], b[k])) minwork = max(a[i], b[k]);
      }
    }
  }
  
  if(minwork < minsum) cout << minwork;
  else cout << minsum;
}