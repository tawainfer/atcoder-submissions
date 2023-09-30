// https://atcoder.jp/contests/abc322/submissions/46122484

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

void set_ptn(map<vector<ll>, ll> &m, vector<ll> ptn, ll k, ll p) {
  if(ptn.size() == k) {
    m[ptn] = INF;
    return;
  }

  for(ll i = 0; i <= p; i++) {
    ptn.push_back(i);
    set_ptn(m, ptn, k, p);
    ptn.pop_back();
  }
}

void check_ptn(vector<map<vector<ll>, ll>> &dp, vector<ll> ptn, ll k, ll p, ll i, vector<vector<ll>> &a, vector<ll> &c) {
  if(ptn.size() == k) {
    if(dp[i][ptn] < dp[i + 1][ptn]) {
      dp[i + 1][ptn] = dp[i][ptn];
      // cout << i << " ptn1" << endl;
      // cout << dp[i + 1][ptn] << endl;
    }

    vector<ll> t(k);
    bool check = true;
    for(int j = 0; j < k; j++) {
      t[j] = min(ptn[j] + a[i][j], p);
      if(t[j] > p) {
        check = false;
        break;
      }
    }

    if(check && (dp[i][ptn] + c[i] < dp[i + 1][t])) {
      dp[i + 1][t] = dp[i][ptn] + c[i];
      // cout << i << " ptn2" << endl;
      // cout << dp[i + 1][t] << endl;
    }

    return;
  }

  for(ll z = 0; z <= p; z++) {
    ptn.push_back(z);
    check_ptn(dp, ptn, k, p, i, a, c);
    ptn.pop_back();
  }
}

void check_ans(map<vector<ll>, ll> &m, ll p, ll k, vector<ll> ptn, ll &ans) {
  if(ptn.size() == k) {
    // cout << m[ptn] << endl;
    bool check = true;
    for(auto x : ptn) {
      if(x < p) {
        check = false;
        break;
      }
    }

    // for(auto x : ptn) cout << x << " ";
    // cout << m[ptn] << endl;

    if(m[ptn] < ans && check) {
      ans = m[ptn];
    }
    return;
  }

  for(ll i = 0; i <= p; i++) {
    ptn.push_back(i);
    check_ans(m, p, k, ptn, ans);
    ptn.pop_back();
  }
}

int main() {
  ll n, k, p;
  cin >> n >> k >> p;

  vector<ll> c(n);
  vector<vector<ll>> a(n, vector<ll>(k));
  for(int i = 0; i < n; i++) {
    cin >> c[i];
    for(int j = 0; j < k; j++) {
      cin >> a[i][j];
    }
  }

  vector<map<vector<ll>, ll>> dp(n + 1);
  for(int i = 0; i <= n; i++) {
    set_ptn(dp[i], vector<ll>(), k, p);
  }

  vector<ll> t(k, 0);
  dp[0][t] = 0;

  for(int i = 0; i < n; i++) {
    check_ptn(dp, vector<ll>(), k, p, i, a, c);
  }

  ll ans = INF;
  check_ans(dp[n], p, k, vector<ll>(), ans);
  cout << (ans == INF ? -1LL : ans);
  return 0;
}
