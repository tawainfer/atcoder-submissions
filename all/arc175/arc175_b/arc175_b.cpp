#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  string s;
  cin >> s;

  deque<char> d;
  vector<ll> st;
  vector<bool> check(2 * n, true);

  for(int i = 0; i < 2 * n; i++) {
    if(s[i] == '(') {
      st.push_back(i);
    } else if(s[i] == ')') {
      if(!st.empty()) {
        st.pop_back();
      } else {
        check[i] = false;
      }
    }
  }

  for(ll i : st) {
    check[i] = false;
  }

  ll cl = 0;
  ll cr = 0;
  for(int i = 0; i < 2 * n; i++) {
    if(!check[i]) {
      d.push_back(s[i]);
      if(s[i] == '(') {
        cl++;
      } else if(s[i] == ')') {
        cr++;
      }
    }
  }

  ll ans = 0;
  while(cl != cr) {
    ans += b;

    if(cl > cr) {
      for(int _ = 0; _ < 2; _++) {
        d.pop_front();
      }
      cl -= 2;
    } else if(cl < cr) {
      for(int _ = 0; _ < 2; _++) {
        d.pop_back();
      }
      cr -= 2;
    }
  }

  while(!d.empty()) {
    ans += min(a, 2 * b);

    for(int _ = 0; _ < 2; _++) {
      d.pop_front();
    }

    if(d.empty()) break;

    for(int _ = 0; _ < 2; _++) {
      d.pop_back();
    }
  }

  cout << ans;
}