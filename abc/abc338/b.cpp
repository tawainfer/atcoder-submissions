// https://atcoder.jp/contests/abc338/submissions/49697711

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();

  vector<int> cnt(26, 0);
  for(int i = 0; i < n; i++) {
    cnt[s[i] - 'a']++;
  }

  int mi = -1;
  int pos = -1;
  for(int i = 0; i < cnt.size(); i++) {
    if(mi < cnt[i]) {
      mi = cnt[i];
      pos = i;
    }
  }

  cout << (char)('a' + pos);
}
