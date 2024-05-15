#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n; cin >> n;
  ll ans = 0;
  for(int i = 1; i < n; i++) for(int j = 1; j < n; j++) {
    if(i * j < n) ans++;
    else break;
  }
  cout << ans;
}