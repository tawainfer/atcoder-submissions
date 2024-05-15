#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  deque<int> a(n);
  for(auto &z : a) cin >> z;

  while(k--) {
    a.pop_front();
    a.push_back(0);
  }

  for(int i = 0; i < n; i++) {
    cout << a[i];
    if(i == n - 1) cout << endl;
    else cout << " ";
  }

  return 0;
}