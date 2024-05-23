#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pow2(ll x) {
  ll res = 1;
  for(int i = 0; i < x; i++) {
    res *= 2;
  }
  return res;
}

int main() {
  ll h;
  cin >> h;

  ll s = 0;
  for(int i = 0; i < 10000; i++) {
    s += pow2(i);
    if(s > h) {
      cout << i + 1;
      return 0;
    }
  }
}