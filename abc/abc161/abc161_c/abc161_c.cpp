#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, k; cin >> n >> k;
  long long t = n % k;

  if(n == 0) cout << 0;
  else cout << min(t, abs(t - k));
}