#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, ans = 0;
  cin >> n;
  if(n == 1000000000000000) {
    ans += 5;
    n--;
  }
  if(n >= 1000000000000) {
    ans += (n - 1000000000000 + 1) * 4;
    n = 1000000000000 - 1;
  }
  if(n >= 1000000000) {
    ans += (n - 1000000000 + 1) * 3;
    n = 1000000000 - 1;
  }
  if(n >= 1000000) {
    ans += (n - 1000000 + 1) * 2;
    n = 1000000 - 1;
  }
  if(n >= 1000) ans += n - 1000 + 1;
  cout << ans;
}