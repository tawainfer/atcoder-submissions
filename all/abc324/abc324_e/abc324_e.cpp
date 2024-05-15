#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<string> v(n);
  for(auto &z : v) cin >> z;

  set<int> se;
  for(int i = 0; i < n; i++) {
    int idx = 0;
    string t = v[i];

    for(int j = 0; j < t.size(); j++) {
      if(s[idx] == t[j]) {
        idx++;
        if(idx == s.size()) {
          se.insert(i);
          break;
        }
      } else {
        idx = 0;
      }
    }
  }

  vector<int> f(500009, 0);
  vector<int> b(500009, 0);
  vector<int> fi(n);
  vector<int> bi(n);

  for(int i = 0; i < n; i++) {
    int cnt = 0;
    string t = v[i];

    int idx = 0;
    for(int j = 0; j < t.size(); j++) {
      if(idx == s.size()) break;
      if(s[idx] == t[j]) {
        idx++;
      }
    }

    f[idx]++;
    fi[i] = idx;

    idx = 0;
    for(int j = t.size() - 1; j >= 0; j--) {
      if(idx == s.size()) break;
      if(s[s.size() - 1 - idx] == t[j]) {
        idx++;
      }
    }

    b[idx]++;
    bi[i] = idx;
  }

  for(int i = 500008; i >= 1; i--) {
    b[i - 1] += b[i];
    f[i - 1] += f[i];
  }

  long long ans = 0;
  for(int i = 0; i < n; i++) {
    ans += b[s.size() - fi[i]];
  }

  cout << ans;
}