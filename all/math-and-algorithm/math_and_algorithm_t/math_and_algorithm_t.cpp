#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, ans = 0; cin >> n;
  vector<int> a(n);
  for(auto& x : a) cin >> x;
  
  for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) for(int k = j + 1; k < n; k++) for(int l = k + 1; l < n; l++) for(int m = l + 1; m < n; m++) if(a[i] + a[j] + a[k] + a[l] + a[m] == 1000) ans++;
  cout << ans;
}