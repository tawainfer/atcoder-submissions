#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, k; cin >> n >> k;
  if(k == 1) cout << "YES\n";
  else {
    if(n / 2 < k) cout << "NO\n";
    else cout << "YES\n";
  }
}