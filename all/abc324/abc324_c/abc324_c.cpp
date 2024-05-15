#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> ans;
  for(int z = 1; z <= n; z++) {
    string t; 
    cin >> t;

    if(s == t) {
      ans.push_back(z);
      continue;
    }

    if(s.size() + 1 == t.size()) {
      // bool check = true;
      // for(int i = 0; i < s.size(); i++) {
      //   cout << i << endl;
      //   cout << s[i] << " " << t[i] << endl;
      //   if(s[i] != t[i]) {
      //     check = false;
      //     break;
      //   }
      // }

      // if(check) {
      //   ans.push_back(z);
      //   continue;
      // }

      // check = true;
      // for(int i = 0; i < s.size(); i++) {
      //   cout << i << endl;
      //   if(s[i] != t[i + 1]) {
      //     check = false;
      //     break;
      //   }
      // }

      // if(check) {
      //   ans.push_back(z);
      //   continue;
      // }

      int idx = 0;
      for(int i = 0; i < t.size(); i++) {
        if(idx == s.size()) break;
        if(s[idx] == t[i]) {
          idx++;
        }
      }

      if(idx == s.size()) {
        ans.push_back(z);
        continue;
      }
    }

    if(s.size() == t.size() + 1) {
      // bool check = true;
      // for(int i = 0; i < t.size(); i++) {
      //   if(s[i] != t[i]) {
      //     check = false;
      //     break;
      //   }
      // }

      // if(check) {
      //   ans.push_back(z);
      //   continue;
      // }

      // check = true;
      // for(int i = 0; i < t.size(); i++) {
      //   if(s[i + 1] != t[i]) {
      //     check = false;
      //     break;
      //   }
      // }

      // if(check) {
      //   ans.push_back(z);
      //   continue;
      // }

      int idx = 0;
      for(int i = 0; i < s.size(); i++) {
        if(idx == t.size()) break;
        if(s[i] == t[idx]) {
          idx++;
        }
      }

      if(idx == t.size()) {
        ans.push_back(z);
        continue;
      }
    }

    if(s.size() == t.size()) {
      int cnt = 0;
      for(int i = 0; i < s.size(); i++) {
        if(s[i] != t[i]) {
          cnt++;
        }
      }

      if(cnt == 1) {
        ans.push_back(z);
        continue;
      }
    }
  }

  cout << ans.size() << endl;
  for(auto x : ans) {
    cout << x << " ";
  }
}