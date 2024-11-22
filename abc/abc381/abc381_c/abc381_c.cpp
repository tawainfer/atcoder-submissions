#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;
  s += "!";

  vector<pair<char, ll>> rle;
  int cnt = 0;
  char last = '?';
  for(int i = 0; i < n + 1; i++) {
    if(s[i] != last) {
      rle.push_back(make_pair(last, cnt));
      cnt = 1;
      last = s[i];
    } else {
      cnt++;
    }
  }

  ll ans = 1;
  for(int i = 0; i < rle.size() - 2; i++) {
    if(rle[i].first == '1' && rle[i + 1].first == '/' && rle[i + 2].first == '2' && rle[i + 1].second == 1) {
      ans = max(ans, min(rle[i].second, rle[i + 2].second) * 2 + rle[i + 1].second);
    }
  }

  cout << ans;
}