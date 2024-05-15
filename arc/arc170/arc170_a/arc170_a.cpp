#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s, t;
  cin >> s >> t;

  set<int> btoa;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'B' && t[i] == 'A') {
      btoa.insert(-i);
    }
  }

  set<int> aa;
  for(int i = 0; i < n; i++) {
    if(t[i] == 'A') {
      aa.insert(-i);
    }
  }

  int ans = 0;
  for(int i = n - 1; i >= 1; i--) {
    if(s[i] == 'A' && t[i] == 'B') {
      s[i] = 'B';
      ans++;

      auto iter = btoa.upper_bound(-i);
      if(iter != btoa.end()) {
        s[-(*iter)] = 'A';
        btoa.erase(iter);
      } else {
        iter = aa.upper_bound(-i);
        if(iter != aa.end()) {
          s[-(*iter)] = 'A';
        } else {
          s[0] = 'A';
        }
      }
    }
  }

  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());

  set<int> atob;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A' && t[i] == 'B') {
      atob.insert(-i);
    }
  }

  set<int> bb;
  for(int i = 0; i < n; i++) {
    if(t[i] == 'B') {
      bb.insert(-i);
    }
  }

  for(int i = n - 1; i >= 1; i--) {
    if(s[i] == 'B' && t[i] == 'A') {
      s[i] = 'A';
      ans++;

      auto iter = atob.upper_bound(-i);
      if(iter != atob.end()) {
        s[-(*iter)] = 'B';
        atob.erase(iter);
      } else {
        iter = bb.upper_bound(-i);
        if(iter != bb.end()) {
          s[-(*iter)] = 'B';
        } else {
          s[0] = 'B';
        }
      }
    }
  }

  cout << (s == t ? ans : -1);
}