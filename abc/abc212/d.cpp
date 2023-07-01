// https://atcoder.jp/contests/abc212/submissions/39166254

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll q;
  cin >> q;

  ll x;
  ll d = 0;
  multiset<ll> ms;

  while(cin >> q) {
    if(q == 1) {
      cin >> x;
      ms.insert(x - d);
    }

    if(q == 2) {
      cin >> x;
      d += x;
    }
    
    if(q == 3) {
      auto iter = ms.begin();
      cout << *iter + d << endl;
      ms.erase(iter);
    }
  }
}
