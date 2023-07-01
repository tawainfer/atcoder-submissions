// https://atcoder.jp/contests/arc016/submissions/29384157

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  char c[9];
  vector<bool> judge(9, false);
  int ans = 0;
  int n; cin >> n;
  for(int i = 0; cin >> c[i]; i++) {
    if(c[i] == 'o') {
      if(!judge[i]) ans++;
      judge[i] = true;
    } else {
      judge[i] = false;
      if(c[i] == 'x') ans++; 
    }
    if(i == 8) i = -1;
  }
  cout << ans;
}
