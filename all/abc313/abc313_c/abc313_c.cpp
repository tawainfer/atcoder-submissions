#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n + 1, 0);
  ll sum = 0;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end());

  ll avg1 = sum / n;
  ll avg2 = (sum + n - 1) / n;
  ll l = 0;
  ll r = 0;

  for(int i = 1; i <= n; i++) {
    if(a[i] == avg1 || a[i] == avg2) {
      continue;
    }

    if(a[i] < avg1) {
      l += avg1 - a[i];
    } else if(a[i] > avg2) {
      r += a[i] - avg2;
    }
  }

  // cout << l << " " << r << endl;
  cout << max(l, r);
}