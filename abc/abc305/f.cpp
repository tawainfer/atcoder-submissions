// https://atcoder.jp/contests/abc305/submissions/42177595

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> g[n + 1];
  vector<bool> seen(n + 1, false);
  seen[1] = true;

  int x;
  string s;
  vector<int> st = {1};

  while(!st.empty()) {
    cin >> s;
    if(s == "OK") return 0;

    int cp = st.back();
    for(int i = 0; i < stoi(s); i++) {
      cin >> x;
      g[cp].push_back(x);
      g[x].push_back(cp);
    }

    bool is_moved = false;
    for(int ep : g[cp]) {
      if(!seen[ep]) {
        cout << ep << endl;
        seen[ep] = true;
        is_moved = true;
        st.push_back(ep);
        break;
      }
    }

    if(!is_moved) {
      st.pop_back();
      cout << st.back() << endl;
    }
  }
}
