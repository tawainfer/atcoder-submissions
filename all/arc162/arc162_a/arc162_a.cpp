#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> p(n);
    for(auto &z : p) cin >> z;

    int ans = 0;
    int ma = 0;

    vector<int> pos(n + 1, -1);
    for(int i = 0; i < n; i++) pos[p[i]] = i;

    for(int i = 0; i < n; i++) {
      bool check = true;
      for(int j = p[i] - 1; j >= 1; j--) {
        if(pos[p[i]] < pos[j]) check = false;
      }

      if(check) {
        ans++;
        // cout << "i=" << i << endl;
      }
    }

    // if(ans == 0) ans = n;
    cout << ans << endl;
  }
}