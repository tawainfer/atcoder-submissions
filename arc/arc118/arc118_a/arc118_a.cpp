#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll t, n;
  cin >> t >> n;
  cout << (100 * n + t - 1) / t + n - 1;
}