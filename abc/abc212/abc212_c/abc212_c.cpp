#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m, ans = 1e9;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for(auto& z : a) cin >> z;
  for(auto& z : b) cin >> z;
  sort(all(a));
  sort(all(b));

  int x = 0, y = 0;
  while(x < n && y < m) {
    ans = min(ans, abs(a[x] - b[y]));
    if(a[x] > b[y]) y++;
    else x++;
  }
  cout << ans;
}