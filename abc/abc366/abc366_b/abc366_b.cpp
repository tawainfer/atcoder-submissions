#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<char>> f(109, vector<char>(109, '?'));
  int max_y = 0;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    max_y = max(max_y, (int)s.size());

    for(int j = 0; j < s.size(); j++) {
      f[j][n - 1 - i] = s[j];
    }
  }

  for(int i = 0; i < max_y; i++) {
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      if(f[i][j] != '?') {
        cnt++;
      }
    }

    for(int j = 0; j < n; j++) {
      if(f[i][j] != '?') {
        cnt--;
        cout << f[i][j];
      } else {
        if(cnt >= 1) {
          cout << "*";
        }
      }
    }
    cout << endl;
  }
}