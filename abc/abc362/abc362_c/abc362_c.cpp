#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> l(n), r(n);
  vector<pair<ll, ll>> v(n);
  for(int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    v[i] = make_pair(l[i], r[i]);
  }
  // sort(v.begin(), v.end());

  ll sum = 0;
  ll add = 0;
  for(auto p : v) {
    sum += p.first;
    add += p.second - p.first;
  }

  // cout << sum << " " << add << endl;
  if(sum > 0 || sum + add < 0) {
    cout << "No";
  } else {
    cout << "Yes\n";
    add = -sum;

    for(auto p : v) {
      ll d = p.second - p.first;
      if(d <= add) {
        cout << p.second;
        add -= d;
      } else {
        cout << p.first + add;
        add = 0;
      }
      cout << " ";
    }
  }
}