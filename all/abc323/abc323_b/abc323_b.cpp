#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> ans;
  for(int i = 1; i <= n; i++) {
    string s;
    cin >> s;

    int cnt = 0;
    for(auto c : s) {
      if(c == 'o') {
        cnt++;
      }
    }

    ans.push_back(make_pair(cnt, -i));
  }
  sort(ans.begin(), ans.end());
  reverse(ans.begin(), ans.end());

  for(auto p : ans) {
    cout << -p.second << " ";
  }
}