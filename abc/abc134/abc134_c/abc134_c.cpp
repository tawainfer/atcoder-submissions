#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b + n);
  reverse(b, b + n);
  for(int i = 0; i < n; i++) {
    if(a[i] == b[0]) cout << b[1];
    else cout << b[0];
    cout << "\n";
  }
}