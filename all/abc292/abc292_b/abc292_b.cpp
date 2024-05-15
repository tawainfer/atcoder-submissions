#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<bool> out(n + 1, false);
  vector<int> cnt(n + 1, 0);

  int t, x;
  while(cin >> t >> x) {
    if(t == 1) {
      cnt[x]++;
      if(cnt[x] >= 2) out[x] = true;
    }

    if(t == 2) {
      out[x] = true;
    }

    if(t == 3) {
      cout << (out[x] ? "Yes" : "No") << endl;
    }
  }
}