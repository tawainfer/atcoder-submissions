#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, vector<int>> mx;
  int x, y;
  while(cin >> x >> y) mx[x].push_back(y);

  long long ans = 0;
  map<pair<int, int>, int> ptn;

  for(auto &z : mx) {
    int s = z.second.size();
    for(int i = 0; i < s; i++) {
      for(int j = i + 1; j < s; j++) {
        ptn[make_pair(min(z.second[i], z.second[j]), max(z.second[i], z.second[j]))]++;
      }
    }
  }

  for(auto &z : ptn) {
    if(z.second >= 2) ans += z.second * (z.second - 1) / 2;
  }

  cout << ans;
  return 0;
}