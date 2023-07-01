// https://atcoder.jp/contests/abc298/submissions/40720389

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 998244353;

int main() {
  ll q;
  cin >> q;

  ll t;
  char c;
  deque<char> d = {'1'};

  ll pow10[30];
  pow10[1] = 10;
  for(ll i = 2; i < 30; i++) pow10[i] = (pow10[i - 1] * pow10[i - 1]) % mod;

  ll ans = 1;
  while(cin >> t) {
    if(t == 1) {
      cin >> c;
      d.push_back(c);
      ans = (10 * ans + ll(c - 48)) % mod;
    }

    if(t == 2) {
      int x = 1;
      for(ll i = 0; i < 20; i++) {
        if(((ll)d.size() - 1) & (1LL << i)) x = (x * pow10[i + 1]) % mod;
      }
      
      ans = ((ans + mod) - (x * ll(d.front() - 48) % mod)) % mod;
      d.pop_front();
    }

    if(t == 3) {
      cout << ans << "\n";
    }
  }
}
