#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1000000;

int main() {
  ll n;
  cin >> n;

  vector<ll> v;
  for(ll i = 1; i <= MAX; i++) {
    string s = to_string(i * i * i);
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) {
      v.push_back(i * i * i);
    }
  }

  auto iter = lower_bound(v.begin(), v.end(), n + 1);
  iter--;
  cout << (*iter);
}