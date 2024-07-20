#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e18;

int main() {
  ll n;
  cin >> n;
  n--;
  string s = to_string(n);

  deque<ll> d = {10, 19};
  ll base = 90;
  while(d.back() < MAX) {
    d.push_back(d.back() + base);
    d.push_back(d.back() + base);
    base *= 10;
  }
  // cout << d.back() << endl;

  // for(int i = 0; i < d.size(); i++) {
  //   cout << d[i] << " " << endl;
  //   if(d[i] >= MAX) {
  //     cout << "OUT!! " << i << endl;
  //     break;
  //   }
  // }

  int k = 0;
  while(1) {
    if(d[k] > n) break;
    k++;
  }
  
  ll x = n - (k == 0 ? 0 : d[k - 1]);
  // cout << x << " " << k << endl;

  if(k == 0) {
    // char c = (x % 10 == 9 ? '0' : (char)(x % 10 + 1 + '0'));
    // cout << c;
    cout << x;
    return 0;
  }

  vector<char> buf(k + 1, '?');
  base = 1;
  for(int i = k / 2; i >= 0; i--) {
    char c;
    if(i == 0) {
      // cout << "w1: " << x % 9 << endl;
      c = (x % 9 + 1 + '0');
      x /= 9;
    } else {
      // cout << "w2: " << x % 10 << endl;
      // c = (x % 10 == 9 ? '0' : to_string(x % 10)[0]);
      c = (x % 10 + '0');
      x /= 10;
    }

    buf[i] = c;
    // if(x <= 0) break;
  }

  for(int i = 0; i < buf.size(); i++) {
    buf[buf.size() - 1 - i] = buf[i];
  }

  for(auto c : buf) cout << c;
}