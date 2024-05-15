#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  set<int> g[200009];
  int a, b;
  for(int i = 0; i < m; i++) {
    cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  vector<bool> stand(200009, false);
  set<int> ans;
  int p, h;

  vector<pair<int, int>> pa;
  for(int i = 0; i < k; i++) {
    cin >> p >> h;
    pa.push_back(make_pair(h, p));
  }
  sort(pa.begin(), pa.end());
  reverse(pa.begin(), pa.end());


  vector<int> max_h(200009, -1);
  for(int i = 0; i < k; i++) {
    int p = pa[i].second;
    int h = pa[i].first;
    if(h <= max_h[p]) continue;
    else max_h[p] = h;

    stand[p] = true;
    ans.insert(p);

    queue<pair<int, int>> q; // name, life
    q.push(make_pair(p, h));

    while(!q.empty()) {
      int cp = q.front().first;
      int cl = q.front().second;
      q.pop();
      if(cl == -1) continue;

      for(auto ep : g[cp]) {
        if((cl - 1) <= max_h[ep]) continue;
        else max_h[ep] = (cl - 1);
                   
        
        ans.insert(ep);
        q.push(make_pair(ep, cl - 1));
      }
    }


  }

  cout << ans.size() << endl;
  for(auto x : ans) cout << x << " "; 
}