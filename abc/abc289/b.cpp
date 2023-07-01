// https://atcoder.jp/contests/abc289/submissions/38791243

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> p = {0};
  for(int i = 1; i <= n; i++) p.push_back(i);

  vector<bool> b(n + 1, 0);
  int a;
  while(cin >> a) {
    b[a] = true;
  }

  stack<int> s;
  for(int i = 1; i <= n; i++) {
    if(!b[i]) {
      s.push(i);
      while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
      }
    } else {
      s.push(i);
    }
  }
}
