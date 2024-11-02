#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  map<ll, ll> m;
  for(int i = 0; i < n; i++) {
    cout << (m[a[i]] == 0 ? -1 : m[a[i]]) << " ";
    m[a[i]] = i + 1;
  }
}