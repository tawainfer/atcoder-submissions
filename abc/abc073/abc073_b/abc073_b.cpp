#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll l, r, ans = 0; cin >> l;
  while(cin >> l >> r) ans += r - l + 1;
  cout << ans;
}