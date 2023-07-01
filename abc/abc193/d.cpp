// https://atcoder.jp/contests/abc193/submissions/38731387

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll score(string s) {
  vector<ll> v(10, 1);
  for(auto &z : s) v[(ll)z - 48] *= 10;

  // for(auto &z : v) cout << z << " ";
  // cout << endl;

  ll sum = 0;
  for(ll i = 1; i <= 9; i++) sum += i * v[i];

  return sum;
}

int main() {
  ll k;
  cin >> k;

  string s, t;
  cin >> s >> t;

  ll ptn = (9 * k - 8) * (9 * k - 9);
  ll win = 0;

  for(ll i = 1; i <= 9; i++) {
    for(ll j = 1; j <= 9; j++) {
      string ss = s;
      ss.back() = '0' + i;
      string tt = t;
      tt.back() = '0' + j;

      vector<ll> cnt(10, k);
      for(auto &z : s.substr(0, 4)) cnt[(int)z - 48]--;
      for(auto &z : t.substr(0, 4)) cnt[(int)z - 48]--;
      if(cnt[i] == 0 or cnt[j] == 0) continue;
      if(i == j && cnt[i] < 2) continue;

      if(score(ss) <= score(tt)) continue;
      win += cnt[i] * (cnt[j] - (i == j));
    }
  }

  cout << fixed << setprecision(6) << (double)win / ptn;
  return 0;
}
