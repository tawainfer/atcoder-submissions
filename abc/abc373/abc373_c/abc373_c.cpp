#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  cout << a.back() + b.back();
}