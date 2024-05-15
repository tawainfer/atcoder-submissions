#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  for(int i = 0; i < n; i++) {
    if(i == 0) cout << a[0];
    else cout << a[i] - a[i - 1];
    cout << (i == a.size() - 1 ? "\n" : " ");
  }

  return 0;
}