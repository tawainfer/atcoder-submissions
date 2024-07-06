#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(6), b(6);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  if(a[3] <= b[0] || b[3] <= a[0]) {
    cout << "No";
    return 0;
  }

  if(a[4] <= b[1] || b[4] <= a[1]) {
    cout << "No";
    return 0;
  }

  if(a[5] <= b[2] || b[5] <= a[2]) {
    cout << "No";
    return 0;
  }

  cout << "Yes";
}