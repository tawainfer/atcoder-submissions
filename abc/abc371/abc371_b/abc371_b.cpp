#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  vector<char> b(m);
  for(int i = 0; i < m; i++) cin >> a[i] >> b[i];

  vector<bool> check(n + 1, false);
  for(int i = 0; i < m; i++) {
    if(!check[a[i]] && b[i] == 'M') {
      check[a[i]] = true;
      cout << "Yes\n";
      continue;
    }

    cout << "No\n";
  }
}