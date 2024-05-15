#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, w, ans = 0; cin >> h >> w;
  vector<int> a(h*w);
  for(int i = 0; i < h*w; i++) cin >> a[i];
  sort(a.begin(), a.end());
  int min = a[0];
  for(int i = 1; i < h*w; i++) ans += a[i] - min;
  cout << ans;
}