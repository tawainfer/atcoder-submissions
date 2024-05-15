#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k; cin >> n >> k;
  vector<int> h(n);
  for(auto& z : h) cin >> z;
  sort(all(h));

  int ans = 1e9;
  for(int i = 0; i < n - k + 1; i++) {
    ans = min(ans, h[i + k - 1] - h[i]);
  }
  cout << ans;
}