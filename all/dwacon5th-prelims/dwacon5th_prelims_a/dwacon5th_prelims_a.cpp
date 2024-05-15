#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, min = 1e9, sum = 0, ans = 0; cin >> n;
  vector<int> a(n);
  for(auto& x : a) {
    cin >> x;
    sum += x;
  }
  for(int i = 0; i < n; i++) {
    if(min > abs(sum - n * a[i])) {ans = i; min = abs(sum - n * a[i]);}
  }
  cout << ans;
}