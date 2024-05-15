#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  set<ll> se;
  for(auto x : a) {
    if(1 <= x && x <= k) {
      se.insert(x);
    }
  }

  ll sum = k * (1 + k) / 2;
  for(auto x : se) {
    sum -= x;
  }

  cout << sum;
}