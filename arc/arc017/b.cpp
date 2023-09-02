// https://atcoder.jp/contests/arc017/submissions/45116165

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<bool> big(n, false);
  big[0] = true;
  for(int i = 1; i < n; i++) {
    if(a[i - 1] < a[i]) {
      big[i] = true;
    }
  }

  int cnt = 0;
  for(int i = 1; i < k; i++) {
    if(!big[i]) cnt++;
  }

  int ans = 0;
  int last = k - 1;
  do {
    if(cnt == 0) ans++;
    last++;
    if(last == n) break;
    if(!big[last]) cnt++;
    if(!big[last - k + 1]) cnt--;
  } while(1);

  cout << ans << endl;
  return 0;
}
