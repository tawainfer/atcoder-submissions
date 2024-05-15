#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n, k;
  cin >> n >> k;

  ll all_cnt = n * 2;
  vector<ll> cnt(n + 1, 2);
  
  vector<ll> a(k);
  for(auto &z : a) {
    cin >> z;
    cnt[z]--;
    all_cnt--;
  }
  

  for(ll i = 1; i <= n; i++) {
    if(cnt[i] == 2) {
      cnt[i] = 0;
      all_cnt -= 2;
    }
  }

  if(all_cnt <= 1) {
    cout << 0;
    return 0;
  }

  vector<ll> ptn;
  for(ll i = 1; i <= n; i++) {
    if(cnt[i] == 1) {
      ptn.push_back(i);
      // cout << i << " ";
    }
  }
  
  ll sum = 0;
  vector<ll> abs_ptn;

  for(ll i = 1; i < ptn.size(); i++) {
    sum += ptn[i] - ptn[i - 1];
    abs_ptn.push_back(ptn[i] - ptn[i - 1]);
  }

  // if(all_cnt % 2 == 0) {
  //   cout << sum;
  //   return 0;
  // }

  vector<pair<ll, ll>> even;
  for(ll i = 0; i < ptn.size() - 1; i += 2) {
    ll add = (even.empty() ? 0 : even.back().second);
    even.push_back(make_pair(i + 1, (ptn[i + 1] - ptn[i]) + add));
    // cout << abs_ptn[i + 1] << " " <<  abs_ptn[i] << endl;
  }

  vector<pair<ll, ll>> odd;
  for(ll i = 1; i < ptn.size(); i += 2) {
    ll add = (odd.empty() ? 0 : odd.back().second);
    odd.push_back(make_pair(i + 1, (ptn[i + 1] - ptn[i]) + add));
  }

  if((ll)ptn.size() % 2 == 0) {
    cout << even.back().second;
    return 0;
  }

  // for(auto p : even) prllf("(%d,%d) ", p.first, p.second);
  // cout << endl;
  // for(auto p : odd) prllf("(%d,%d) ", p.first, p.second);
  // cout << endl;

  ll ans = INF;
  for(ll i = 0; i < ptn.size(); i++) {
    auto iter_l = lower_bound(even.begin(), even.end(), make_pair(i, -INF));
    auto iter_r = upper_bound(odd.begin(), odd.end(), make_pair(i, INF));

    ll l = even.back().second;
    if(iter_l != even.end()) {
      if(iter_l == even.begin()) {
        l = 0;
      } else {
        iter_l--;
        l = (*iter_l).second;
      }
    }

    ll r = 0;
    if(iter_r != odd.end()) {
      if(iter_r == odd.begin()) {
        r = odd.back().second;
      } else {
        iter_r--;
        r = odd.back().second - (*iter_r).second;
      }
    }
    ans = min(ans, l + r);
  }

  cout << ans;
}