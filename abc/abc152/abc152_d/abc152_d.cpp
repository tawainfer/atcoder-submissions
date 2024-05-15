#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<vector<int>> cnt(10, vector<int>(10, 0));
  for(int i = 1; i <= n; i++) {
    string s = to_string(i);
    cnt[s.front() - '0'][s.back() - '0']++;
  }

  ll ans = 0;
  for(int i = 1; i <= n; i++) {
    string s = to_string(i);
    ans += cnt[s.back() - '0'][s.front() - '0'];
  }

  cout << ans;
  return 0;
}
