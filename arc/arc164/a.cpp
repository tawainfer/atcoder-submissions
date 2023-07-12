// https://atcoder.jp/contests/arc164/submissions/43497502

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll t;
  cin >> t;

  vector<ll> pow3 = {1};
  for(ll i = 0; i < 38; i++) pow3.push_back(pow3.back() * 3);

  ll n, k;
  while(t--) {
    cin >> n >> k;

    vector<pair<ll, ll>> ptn;
    vector<ll> cnt(39, 0);
    for(ll i = pow3.size() - 1; i >= 0; i--) {
      cnt[i] = n / pow3[i];
      ptn.push_back(make_pair(i, n / pow3[i]));
      n %= pow3[i];
    }

    ll cnt_min = 0;
    for(auto p : ptn) cnt_min += p.second;

    ll cnt_max = 0;
    for(int i = 0; i < pow3.size(); i++) {
      cnt_max += pow3[i] * cnt[i];
    }

    if(cnt_min <= k && k <= cnt_max && cnt_min % 2 == k % 2) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
}
