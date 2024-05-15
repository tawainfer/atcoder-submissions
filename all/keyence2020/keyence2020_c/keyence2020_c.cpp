#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, s;
  cin >> n >> k >> s;

  vector<int> ans(n);
  for(int i = 0; i < n; i++) {
    if(i < k) ans[i] = s;
    else ans[i] = s % 1000000000 + 1;
  }

  for(auto z : ans) cout << z << ' ';
  return 0;
}