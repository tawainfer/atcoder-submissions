// https://atcoder.jp/contests/abc302/submissions/41578069

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (auto &z : s) cin >> z;

  vector<int> ptn;
  for (int i = 0; i < n; i++) ptn.push_back(i);

  do {
    bool check = true;
    for (int i = 1; i < n; i++) {
      string t = s[ptn[i - 1]];
      string u = s[ptn[i]];

      int cnt = 0;
      for (int j = 0; j < m; j++) {
        if (t[j] != u[j]) cnt++;
      }

      if (cnt != 1) {
        check = false;
        break;
      }
    }

    if (check) {
      cout << "Yes";
      return 0;
    }
  } while (next_permutation(ptn.begin(), ptn.end()));

  cout << "No";
}
