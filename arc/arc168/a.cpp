// https://atcoder.jp/contests/arc168/submissions/47771536

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;
  s += "<";

  ll ans = 0;
  ll cnt = 0;

  for(char c : s) {
    if(c == '<') {
      ans += cnt * (cnt + 1) / 2;
      cnt = 0;
    } else if(c == '>') {
      cnt++;
    }
  }

  cout << ans;
}
