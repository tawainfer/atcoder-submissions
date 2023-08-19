// https://atcoder.jp/contests/abc315/submissions/44752629

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<set<int>> g(n + 1);
  vector<set<int>> rg(n + 1);
  vector<int> out(n + 1, 0);
  for(int cp = 1; cp <= n; cp++) {
    int c;
    cin >> c;

    while(c--) {
      int ep;
      cin >> ep;
      g[cp].insert(ep);
      rg[ep].insert(cp);
      out[cp]++;
    }
  }

  set<int> ptn;
  queue<int> q;
  q.push(1);

  vector<bool> seen(n + 1, false);
  seen[1] = true;

  while(!q.empty()) {
    int cp = q.front();
    q.pop();

    for(int ep : g[cp]) {
      if(!seen[ep]) {
        seen[ep] = true;
        ptn.insert(ep);
        q.push(ep);
      }
    }
  }

  // for(auto x : ptn) cout << x << " ";
  // cout << endl;

  deque<int> ans;
  seen.assign(n + 1, false);
  seen[1] = true;
  for(int i = 2; i <= n; i++) {
    if(ptn.find(i) == ptn.end()) {
      seen[i] = true;
    }
  }

  // for(int i = 1; i <= n; i++) {
  //   if(seen[i]) continue;
  //   if(out[i] != 0) continue;
  //   if(ptn.find(i) == ptn.end()) continue;

    while(!q.empty()) {
      q.pop();
    }

    for(int i = 1; i <= n; i++) {
      if(ptn.find(i) != ptn.end() && out[i] == 0) {
        q.push(i);
        ans.push_back(i);
      }
    }

    // deque<int> stock;
    // stock.push_back(i);

    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      for(int ep : rg[cp]) {
        if(ptn.find(ep) == ptn.end()) continue;
        if(out[ep] != 0) {
          out[ep]--;
          if(out[ep] == 0) {
            ans.push_back(ep);
            q.push(ep);
          }
        }
      }
    }

    // while(!stock.empty()) {
    //   ans.push_front(stock.back());
    //   stock.pop_back();
    // }
  // }

  // reverse(ans.begin(), ans.end());
  for(auto x : ans) {
    if(x != 1) cout << x << " ";
  }
}
