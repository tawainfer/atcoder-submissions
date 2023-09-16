// https://atcoder.jp/contests/abc320/submissions/45600712

#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

bool check(vector<string> &v, int time, int target, int idx) {
  if((int)(v[idx][time % v[idx].size()] - '0') == target) return true;
  return false;
}

int main() {
  int m;
  cin >> m;

  vector<string> v(3);
  for(int i = 0; i < 3; i++) {
    cin >> v[i];
  }

  int ans = INF;
  for(int i = 0; i <= 9; i++) {
    vector<int> tmp = {0, 1, 2};
    do {
      vector<int> ptn;
      for(int x : tmp) ptn.push_back(x);

      for(int t = 0; t <= 300; t++) {
        if(check(v, t, i, ptn.back())) {
          ptn.pop_back();
        }

        if(ptn.size() == 0) {
          ans = min(ans, t);
          break;
        }
      }
    } while(next_permutation(tmp.begin(), tmp.end()));
  }

  cout << (ans == INF ? -1 : ans);
  return 0;
}
