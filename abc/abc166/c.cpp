// https://atcoder.jp/contests/abc166/submissions/30615519

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef int ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  for(auto& z : h) cin >> z;

  map<int, vector<int>> mp;
  int a, b;
  while(cin >> a >> b) {
    mp[a - 1].push_back(b - 1);
    mp[b - 1].push_back(a - 1);
  }

  int ans = 0;
  for(int i = 0; i < n; i++) {
    int flag = 0;
    for(int j = 0; j < mp[i].size(); j++) {
      if(h[i] <= h[mp[i][j]]) flag++;
    }
    if(flag == 0) ans++;
  }
  cout << ans;
}
