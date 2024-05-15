#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> g[2009];
  int u, v;
  for(int i = 0; i < m; i++) {
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int k;
  cin >> k;

  deque<int> p(k), d(k);
  for(int i = 0; i < k; i++) cin >> p[i] >> d[i];

  vector<int> color(2009, -1); 

  for(int i = 0; i < k; i++) {
    if(d[i] == 0) continue;

    queue<int> q;
    q.push(p[i]);
    vector<int> cnt(2009, -1);
    cnt[p[i]] = 0;
    color[p[i]] = 0;

    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      for(auto ep : g[cp]) {
        if(cnt[cp] + 1 < d[i] && cnt[ep] == -1) {
          cnt[ep] = cnt[cp] + 1;
          color[ep] = 0;
          q.push(ep);
        }
      }
    }
  }

  // for(auto x : color) cout << x << " ";
  // cout << endl;

  bool paint_black = false;
  for(int i = 1; i <= n; i++) {
    if(color[i] == -1) {
      color[i] = 1;
      paint_black = true;
    }
  }

  if(!paint_black) {
    cout << "No";
    return 0;
  }

  for(int i = 0; i < k; i++) {
    if(d[i] == 0) {
      if(color[p[i]] != 1) {
        cout << "No";
        return 0;
      }

      continue;
    }

    queue<int> q;
    q.push(p[i]);
    vector<int> cnt(2009, -1);
    cnt[p[i]] = 0;
    color[p[i]] = 0;

    paint_black = false;
    while(!q.empty()) {
      int cp = q.front();
      q.pop();

      for(auto ep : g[cp]) {
        if(cnt[cp] + 1 < d[i] && cnt[ep] == -1) {
          cnt[ep] = cnt[cp] + 1;
          q.push(ep);
        } else if(cnt[cp] + 1 == d[i] && cnt[ep] == -1) {
          if(color[ep] == 1) {
            paint_black = true;
          }
        }
      }
    }

    if(!paint_black) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes" << endl;
  for(int i = 1; i <= n; i++) cout << color[i];
}