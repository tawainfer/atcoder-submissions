#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;
  vector<ll> a = {1, 1};
  ll mod = 1e9 + 7;

  for(int i = 2; i < n; i++) {
    a.push_back(a.back() + a[a.size() - 2]);
    a[a.size() - 1] %= mod;
  }

  // for(auto &z : a) cout << z << " ";
  cout << a[n - 1];
}