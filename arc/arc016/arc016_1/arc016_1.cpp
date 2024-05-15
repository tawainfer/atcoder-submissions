#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, m; cin >> n >> m;
  if(n == m) cout << n - 1;
  else cout << n;
  cout << endl;
}