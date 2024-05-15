#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(vector<ll> ptn, vector<vector<ll>> &ans) {
  ans.push_back(ptn);

  for(int i = 0; i <= 9; i++) {
    if(ptn.back() <= i) break;
    ptn.push_back(i);
    dfs(ptn, ans);
    ptn.pop_back();
  }
}

int main() {
  ll k;
  cin >> k;

  vector<vector<ll>> ans;
  for(int i = 9; i >= 0; i--) {
    vector<ll> ptn = {i};
    dfs(ptn, ans);
  }

  vector<ll> ans2;
  for(auto v : ans) {
    string s = "";
    for(auto x : v) {
      s += (char)('0' + x);
    }
    ans2.push_back(stoll(s));
  }

  sort(ans2.begin(), ans2.end());
  cout << ans2[k] << endl;
}