#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int k, t;
  cin >> k >> t;

  deque<int> a(t);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  int ans = 0;
  int not0 = 0;
  bool turn = true;
  bool last = false;

  while(k--) {
    if(last) ans++;
    not0 = 0;
    for(int i = 0; i < a.size(); i++) if(a[i] != 0) not0++;
    if(not0 == 1) last = true;

    if(turn) {
      a.back()--;
    } else {
      if(!last) a[a.size() - 2]--;
      else a.back()--;
      sort(a.begin(), a.end());
    }

    turn = !turn;
  }

  cout << ans;
  return 0;
}