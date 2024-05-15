#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, check[114514], ans = 0; cin >> n;
  vector<int> h(n);
  for(auto& z : h) cin >> z;
  
  for(int i = 0; i < n; i++) if(!check[i]) {
  for(int j = i + 1; j < n; j++) {
    if(h[j-1] < h[j]) break;
    check[j] = true;
    ans = max(ans, j - i);
  }
  }
  cout << ans;
}