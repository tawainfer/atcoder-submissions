// https://atcoder.jp/contests/arc175/submissions/51652516

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  string s;
  cin >> s;

  vector<ll> st;
  vector<bool> seen(2 * n, false);
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '(') {
      st.push_back(i);
    } else if(s[i] == ')' && !st.empty()) {
      seen[st.back()] = true;
      seen[i] = true;
      st.pop_back();
    }
  }

  deque<char> d;
  int cs = 0;
  int ce = 0;
  for(int i = 0; i < s.size(); i++) {
    if(!seen[i]) {
      d.push_back(s[i]);
      if(s[i] == '(') {
        cs++;
      } else {
        ce++;
      }
    }
  }

  ll ans = abs(cs - ce) / 2 * b;

  if(cs > ce) {
    for(int _ = 0; _ < cs - ce; _++) {
      d.pop_back();
    }
  } else if(cs < ce) {
    for(int _ = 0; _ < ce - cs; _++) {
      d.pop_front();
    }
  }

  // for(auto c : d) cout << c;

  ll hs = d.size() / 2;
  // ans += min(hs / 2 * a + (hs % 2) * 2 * b, min((hs + 1) / 2 * a, (ll)d.size() * b));
  ans += (hs + 1) / 2 * min(a, 2 * b);
  cout << ans;
}
