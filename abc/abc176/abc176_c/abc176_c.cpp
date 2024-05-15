#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, ans = 0; cin >> n;
  vector<long long> a(n);
  for(auto& z : a) cin >> z;

  for(int i = 1; i < n; i++) if(a[i-1] > a[i]) {
    ans += a[i-1] - a[i];
    a[i] += a[i-1] - a[i];
  }

  cout << ans;
}