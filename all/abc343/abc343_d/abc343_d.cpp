#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, t;
  cin >> n >> t;

  map<ll, ll> m;
  m[0] = n;
  ll cnt = 1;
  
  vector<ll> p(n + 1, 0);
  for(int i = 0; i < t; i++) {
    ll a, b;
    cin >> a >> b;

    m[p[a]]--;
    if(m[p[a]] == 0) {
      cnt--;
    }

    p[a] += b;
    if(m[p[a]] == 0) {
      cnt++;
    }
    m[p[a]]++;

    cout << cnt << endl;
  }
}