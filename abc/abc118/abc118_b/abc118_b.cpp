#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, k, b, ans = 0; cin >> n >> m;
  int N = n;
  vector<int> a(m);
  while(n--) while(cin >> k) while(k--) {
    cin >> b;
    a[b-1]++;
  }
  for(auto e : a) if(e == N) ans++;
  cout << ans;
}