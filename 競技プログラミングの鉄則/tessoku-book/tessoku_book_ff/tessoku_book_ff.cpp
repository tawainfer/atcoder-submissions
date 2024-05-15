#include <bits/stdc++.h>
using namespace std;

void get_ptn(vector<vector<char>> &ptn) {
  ptn.clear();
  for(char a = '0'; a <= '9'; a++) {
    for(char b = '0'; b <= '9'; b++) {
      for(char c = '0'; c <= '9'; c++) {
        for(char d = '0'; d <= '9'; d++) {
          ptn.push_back({a, b, c, d});
        }
      }
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  vector<int> t(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    t[i]--;
  }

  vector<vector<char>> ans;
  vector<vector<char>> ptn;
  get_ptn(ptn);

  for(auto a : ptn) {
    bool check = true;
    for(int i = 0; i < n; i++) {
      string b = s[i];
      int cnt = 0;

      for(int j = 0; j < 4; j++) {
        if(a[j] != b[j]) {
          cnt++;
        }
      }

      if(t[i] == 2) {
        if(cnt < 2) {
          check = false;
        }
      } else {
        if(cnt != t[i]) {
          check = false;
        }
      }
    }

    if(check) {
      ans.push_back(a);
    }
  }

  if(ans.size() == 1) {
    for(auto c : ans[0]) {
      cout << c;
    }
  } else {
    cout << "Can't Solve";
  }
}
