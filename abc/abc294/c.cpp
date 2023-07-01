// https://atcoder.jp/contests/abc294/submissions/39854820

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  deque<int> a(n), b(m);
  for(auto &z : a) cin >> z;
  for(auto &z : b) cin >> z;

  int cnt = 1;
  int pa = 0;
  int pb = 0;
  vector<int> ansa(n), ansb(m);

  while(!(pa == n && pb == m)) {
    if(pa == n) {
      ansb[pb] = cnt;
      cnt++;
      pb++;
    } else if(pb == m) {
      ansa[pa] = cnt;
      cnt++;
      pa++;
    } else {
      if(a[pa] > b[pb]) {
        ansb[pb] = cnt;
        cnt++;
        pb++;
      } else {
        ansa[pa] = cnt;
        cnt++;
        pa++;
      }
    }
  }

  for(auto &z : ansa) cout << z << " ";
  cout << endl;
  for(auto &z : ansb) cout << z << " ";
}
