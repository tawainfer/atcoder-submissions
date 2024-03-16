// https://atcoder.jp/contests/abc345/submissions/51361994

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  ll n = s.size();

  map<char, int> m;
  for(char c : s) {
    m[c]++;
  }

  ll ans = 0;
  for(auto p : m) {
    if(p.second >= 2) {
      ans = 1;
      break;
    }
  }

  for(int i = 0; i < n - 1; i++) {
    m[s[i]]--;
    ans += n - i - 1 - m[s[i]];
  }

  cout << ans;
}
