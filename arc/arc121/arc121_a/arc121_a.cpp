#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> bx, by;
  vector<pair<ll, ll>> xi, yi;
  ll x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    bx.push_back(x);
    by.push_back(y);
    xi.push_back(make_pair(x, i));
    yi.push_back(make_pair(y, i));
  }

  sort(xi.begin(), xi.end());
  sort(yi.begin(), yi.end());
  set<ll> se;

  se.insert(xi[0].second);
  se.insert(xi[1].second);
  se.insert(xi[xi.size() - 1].second);
  se.insert(xi[xi.size() - 2].second);

  se.insert(yi[0].second);
  se.insert(yi[1].second);
  se.insert(yi[yi.size() - 1].second);
  se.insert(yi[yi.size() - 2].second);

  vector<int> ptn;
  for (auto &z : se) ptn.push_back(z);
  // for (auto &z : ptn) cout << z << " ";
  // cout << endl;

  vector<int> ans;
  for (int i = 0; i < ptn.size(); i++) {
    for (int j = i + 1; j < ptn.size(); j++) {
      ans.push_back(
          max(abs(bx[ptn[i]] - bx[ptn[j]]), abs(by[ptn[i]] - by[ptn[j]])));
    }
  }

  sort(ans.begin(), ans.end());
  cout << ans[ans.size() - 2];
  // for (auto &z : ans) cout << z << " ";
  // cout << endl;
  return 0;
}