#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, k; cin >> n >> k;
  int t[n+1];
  for(int i = 1; i <= n; i++) cin >> t[i];
  for(int i = 3; i <= n; i++) if(t[i] + t[i-1] + t[i-2] < k) {cout << i << "\n"; return 0;}
  cout << -1 << "\n";
}