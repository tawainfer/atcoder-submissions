#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  vector<deque<ll>> idx(26);
  for(int i = 0; i < s.size(); i++) {
    idx[s[i] - 'A'].push_back(i);
  }

  ll ans = 0;
  for(int i = 0; i < 26; i++) {
    if (idx[i].size() < 2) continue;

    ll sum = 0;
    for(auto x : idx[i]) {
      sum += x;
    }

    for(int j = 0; j < idx[i].size() - 1; j++) {
      sum -= (idx[i][j] - (j <= 0 ? 0 : idx[i][j - 1])) * (idx[i].size() - j);
        ans += sum - (idx[i].size() - j - 1);
    }
  }

  cout << ans;
}