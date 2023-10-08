// https://atcoder.jp/contests/abc323/submissions/46301239

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll vector_max(vector<ll> v, int ignore) {
  ll res = 0;
  for(int i = 0; i < v.size(); i++) {
    if(i != ignore) {
      res = max(res, v[i]);
    }
  }

  return res;
}

int main() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(m);
  for(auto &z : a) cin >> z;

  vector<ll> score(n, 0);
  vector<string> s(n);
  vector<vector<ll>> no(n);

  for(int i = 0; i < n; i++) {
    cin >> s[i];
    score[i] = (i + 1);

    for(int j = 0; j < m; j++) {
      if(s[i][j] == 'o') {
        score[i] += a[j];
      } else {
        no[i].push_back(a[j]);
      }
    }
    sort(no[i].begin(), no[i].end());
    reverse(no[i].begin(), no[i].end());
  }

  for(int i = 0; i < n; i++) {
    ll cnt = 0;
    ll sc = score[i];
    ll ma = vector_max(score, i);

    for(int j = 0; j < no[i].size(); j++) {
      if(sc > ma) break;
      cnt++;
      sc += no[i][j];
    }

    cout << cnt << endl;
  }
}
