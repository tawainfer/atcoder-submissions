// https://atcoder.jp/contests/arc156/submissions/38979749

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  int n;
  string s;
  while (cin >> n >> s) {
    int cnt = 0;
    deque<int> tmp;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        cnt++;
        if(tmp.size() < 2) tmp.push_back(i);
        else {
          tmp.push_back(i);
          tmp.pop_front();
        }
      }
    }

    deque<int> d;
    if (cnt % 2)
      cout << -1 << endl;
    else if(s.size() == 3 && cnt == 2 && tmp.back() == tmp.front() + 1) cout << -1 << endl;
    else if(s == "0110") cout << 3 << endl;
    else {
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') continue;
        if (!d.empty()) {
          if (i - d.front() >= 2) {
            d.pop_front();
          } else
            d.push_back(i);
        } else {
          d.push_back(i);
        }
      }

      if (d.empty() || cnt > 2)
        cout << cnt / 2 << endl;
      else
        cout << cnt / 2 + 1 << endl;
    }
  }
}
