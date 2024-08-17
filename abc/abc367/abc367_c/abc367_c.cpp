#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(vector<ll> p, ll idx, ll n, ll k, vector<ll> &r, set<vector<ll>> &ptn) {
  if(idx >= n) {
    ll sum = 0;
    for(auto x : p) {
      sum += x;
    }
    
    if(sum % k == 0) ptn.insert(p);
    return;
  }

  for(ll i = 1; i <= r[idx]; i++) {
    p.push_back(i);
    dfs(p, idx + 1, n, k, r, ptn);
    p.pop_back();
  }
}

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> r(n);
  for(auto &z : r) cin >> z;

  set<vector<ll>> ptn;
  dfs(vector<ll>(), 0, n, k, r, ptn);
  
  for(auto p : ptn) {
    for(auto x : p) {
      cout << x << " ";
    }
    cout << endl;
  }
}