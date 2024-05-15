#include <bits/stdc++.h>
using namespace std;

void calc(int &x, int &c2, int &c3, int &other) {
  while(x % 2 == 0 && x > 0) {
    c2++;
    x /= 2;
  }

  while(x % 3 == 0 && x > 0) {
    c3++;
    x /= 3;
  }

  other = x;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<int> c2(n, 0);
  vector<int> c3(n, 0);
  vector<int> other(n, 0);
  for(int i = 0; i < n; i++) calc(a[i], c2[i], c3[i], other[i]);

  int mi2 = 2e9;
  int mi3 = 2e9;

  for(int i = 0; i < n; i++) {
    if(other[0] != other[i]) {
      cout << -1;
      return 0;
    }

    mi2 = min(c2[i], mi2);
    mi3 = min(c3[i], mi3);
  }

  int ans = 0;
  for(int i = 0; i < n; i++) ans += (c2[i] - mi2) + (c3[i] - mi3);
  
  cout << ans;
  return 0;
}