// https://atcoder.jp/contests/abc243/submissions/39131086

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, x;
  cin >> n >> x;
  
  string s;
  cin >> s;

  vector<int> u;
  vector<int> d;
  for(int i = 0; i < n; i++) {
    (s[i] == 'U' ? u.push_back(i) : d.push_back(i));
    if(u.size() > 0 && d.size() > 0 && s[i] == 'U') {
      s[u.back()] = '!';
      s[d.back()] = '!';
      u.pop_back();
      d.pop_back();
    }
  }

  for(auto &c : s) {
    if(c == 'U') x /= 2;
    if(c == 'L') x *= 2;
    if(c == 'R') x = x * 2 + 1;
  }

  cout << x;
  return 0;
}
