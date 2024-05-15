#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  vector<int> a(n);
  for(auto& z : a) cin >> z;
  sort(a.begin(), a.end());
  for(auto z : a) cout << z << " ";
}