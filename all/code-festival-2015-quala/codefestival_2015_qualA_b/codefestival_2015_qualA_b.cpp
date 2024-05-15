#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> a(n);
  for(auto& z : a) cin >> z;
  reverse(all(a));
  
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += a[i] * pow(2, i);
  }
  cout << ans << "\n";
}