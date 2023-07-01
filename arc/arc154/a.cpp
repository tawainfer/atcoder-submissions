// https://atcoder.jp/contests/arc154/submissions/38254287

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll string_mod(string s, ll mod){
    ll rest = 0;
    for(char c : s){
        ll v = c-'0';
        rest = (rest*10 + v) % mod;
    }
    return rest;
}

int main() {
  ll n;
  cin >> n;

  string a, b;
  cin >> a >> b;
  ll mod = 998244353;

  for(int i = 0; i < a.size(); i++) {
    if(a > b && a[i] < b[i]) {
      char t = a[i];
      a[i] = b[i];
      b[i]= t;
      // cout << i << " pa\n";
    } else if(b > a && b[i] < a[i]) {
      char t = a[i];
      a[i] = b[i];
      b[i]= t;
      // cout << i << " pb\n";
    }
    // cout << i << " " << a << " " << b << endl;
  }

  cout << string_mod(a, mod) * string_mod(b, mod) % mod;
  return 0;
}
