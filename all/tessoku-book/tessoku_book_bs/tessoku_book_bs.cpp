#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> a(n), b(n);
  for(int &z : a) cin >> z;
  for(int &z : b) cin >> z;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  sort(b.begin(), b.end());
  
  int ans = 0;
  while(!a.empty()) {
    ans += a.back() * b.back();
    a.pop_back();
    b.pop_back();
  }
  
  cout << ans;
  return 0;
}