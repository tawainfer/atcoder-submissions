#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<ll> ptn;
  vector<char> v;
  for(char c : s) {
    if(v.size() != 0 && v.back() == c) {
      ptn.push_back(v.size());
      v.clear();
    }
    v.push_back(c);
  }
  ptn.push_back(v.size());

  ll ans = 1;
  for(auto x : ptn) {
    ans *= (x + 2 - 1) / 2;
    ans %= MOD;
  }

  cout << ans;
}