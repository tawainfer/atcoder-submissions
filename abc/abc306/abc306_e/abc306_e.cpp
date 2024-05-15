#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, q;
  cin >> n >> k >> q;

  multiset<int> major;
  multiset<int> minor;
  for(int i = 0; i < k; i++) major.insert(0);
  for(int i = 0; i < n - k; i++) minor.insert(0);

  vector<int> a(n + 1, 0);
  int x, y;
  long long ans = 0;

  if(minor.size() == 0) {
    for(int i = 0; i < q; i++) {
      cin >> x >> y;

      ans += y - a[x];
      a[x] = y;
      cout << ans << endl;
    }

    return 0;
  }

  for(int i = 0; i < q; i++) {
    cin >> x >> y;

    if(major.find(a[x]) != major.end()) {
      auto iter = minor.end();
      iter--;
      if((*iter) <= y) {
        ans += y - a[x];
        major.insert(y);
        major.erase(major.find(a[x]));
      } else {
        ans += (*iter) - a[x];
        minor.insert(y);
        minor.erase(iter);
        major.insert(*iter);
        major.erase(major.find(a[x]));
      }
    } else {
      if((*major.begin()) < y) {
        ans += y - (*major.begin());
        minor.insert(*major.begin());
        minor.erase(minor.find(a[x]));
        major.insert(y);
        major.erase(major.begin());
      } else {
        minor.insert(y);
        minor.erase(minor.find(a[x]));
      }
    }

    cout << ans << endl;
    a[x] = y;
  }
}