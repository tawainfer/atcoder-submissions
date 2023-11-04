// https://atcoder.jp/contests/abc327/submissions/47257880

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  vector<int> b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  vector<set<int>> g(n + 1);
  for(int i = 0; i < m; i++) {
    if(a[i] == b[i]) {
      cout << "No";
      return 0;
    }

    g[a[i]].insert(b[i]);
    g[b[i]].insert(a[i]);
  }

  vector<int> seen(n + 1, -1);
  bool check = true;
  // queue<int> q;
  // q.push(1);

  for(int i = 1; i <= n; i++) {
    if(seen[i] != -1) continue;
    seen[i] = 0;

    queue<int> q;
    q.push(i);

    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      for(auto ep : g[cp]) {
        if(seen[ep] != -1) {
          if(seen[ep] == seen[cp]) {
            check = false;
          }
          continue;
        }

        seen[ep] = (seen[cp] ^ 1);
        q.push(ep);
      }
    }

    if(!check) {
      cout << "No";
      return 0;
    }
  }

  // while(!q.empty()) {
  //   int cp = q.front();
  //   q.pop();

  //   if(seen[cp] != -1) {
      
  //   }

  //   for(auto ep : g[cp]) {
  //     if(seen[ep] != -1) {
  //       // if(seen[ep] == seen[cp]) {
  //       //   check = false;
  //       // }
  //       continue;
  //     }

  //     seen[ep] = (seen[cp] ^ 1);
  //     q.push(ep);
  //   }
  // }

  // if(!check) {
  //   cout << "No";
  //   return 0;
  // }

  for(int i = 0; i < m; i++) {
    if(seen[a[i]] == seen[b[i]] && seen[a[i]] != -1 && seen[b[i]] != -1) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}
