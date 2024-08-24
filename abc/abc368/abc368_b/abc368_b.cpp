#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  int ans = 0;
  while(1) {
    ans++;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    a[0]--;
    a[1]--;
    
    int cnt = 0;
    for(auto x : a) if(x > 0) cnt++;
    if(cnt <= 1) break;
  }

  cout << ans;
}