// https://atcoder.jp/contests/abc294/submissions/39867250

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll l;
  cin >> l;

  ll n1, n2;
  cin >> n1 >> n2;

  vector<ll> v1(n1), v2(n2), l1(n1), l2(n2);
  for(int i = 0; i < n1; i++) cin >> v1[i] >> l1[i];
  for(int i = 0; i < n2; i++) cin >> v2[i] >> l2[i];

  map<ll, ll> m1, m2;
  vector<ll> s1(n1, 0), s2(n2, 0);
  s1[0] = l1[0];
  s2[0] = l2[0];
  for(int i = 1; i < n1; i++) s1[i] = s1[i - 1] + l1[i];
  for(int i = 1; i < n2; i++) s2[i] = s2[i - 1] + l2[i];

  set<ll> se;
  for(auto &z : s1) se.insert(z);
  for(auto &z : s2) se.insert(z);

  deque<ll> ptn;
  for(auto &z : se) ptn.push_back(z);

  int idx = 0;
  for(auto &z : ptn) {
    while(z > s1[idx]) idx++;
    m1[z] = v1[idx];
  }
  
  idx = 0;
  for(auto &z : ptn) {
    while(z > s2[idx]) idx++;
    m2[z] = v2[idx];
  }

  ptn.push_front(0);
  m1[0] = -1;
  m2[0] = -1;
  ll ans = 0;

  for(int i = 1; i < ptn.size(); i++) {
    if(m1[ptn[i]] == m2[ptn[i]]) ans += ptn[i] - ptn[i - 1];
  }

  cout << ans;
  return 0;
}
