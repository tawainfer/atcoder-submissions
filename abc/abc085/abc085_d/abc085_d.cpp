#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, h;
  cin >> n >> h;

  deque<pair<int, int>> ab, ba;
  int x, y;
  for(int i = 0; i < n; i++) {
    cin >> x >> y;
    ab.push_back(make_pair(x, y));
  }

  sort(ab.begin(), ab.end(), [](const std::pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
  });
  
  for(int i = 0; i < ab.size() - 1; i++) {
    ba.push_back(make_pair(ab[i].second, ab[i].first));
  }
  sort(ba.begin(), ba.end());

  int ans = 0;
  while(!ba.empty()) {
    if(ba.back().first <= ab.back().first) {
      ba.pop_back();
      continue;
    }

    ans++;
    h -= ba.back().first;

    if(h <= 0) {
      cout << ans;
      return 0;
    }

    ba.pop_back();
  }

  if(h <= 0) {
    cout << ans;
    return 0;
  }

  h -= ab.back().second;
  ans++;
  if(h <= 0) {
    cout << ans;
    return 0;
  }

  ans += (h + ab.back().first - 1) / ab.back().first;
  cout << ans;
  return 0;
}