// https://atcoder.jp/contests/abc351/submissions/52846691

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &z : a) cin >> z;

  vector<ll> b;
  for(auto x : a) {
    b.push_back(x);
    while(b.size() >= 2 && b[b.size() - 1] == b[b.size() - 2]) {
      b.pop_back();
      b.back()++;
    }
  }

  cout << b.size();
}
