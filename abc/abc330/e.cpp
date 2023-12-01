// https://atcoder.jp/contests/abc330/submissions/48063098

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  vector<int> cnt(n + 2, 0);

  for(auto &x : a) {
    cin >> x;
    if(x > n) {
      x = n + 1;
    }
    cnt[x]++;
  }
  
  set<int> se;
  for(int i = 0; i < cnt.size(); i++) {
    if(cnt[i] == 0) {
      se.insert(i);
    }
  }

  for(int _ = 0; _ < q; _++) {
    int i, x;
    cin >> i >> x;
    i--;
    x = min(n + 1, x);

    cnt[a[i]]--;
    if(cnt[a[i]] == 0) {
      se.insert(a[i]);
    }

    a[i] = x;
    cnt[x]++;
    if(cnt[x] == 1) {
      se.erase(x);
    }

    cout << *(se.begin()) << endl;
  }
}
