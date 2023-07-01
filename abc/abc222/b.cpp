// https://atcoder.jp/contests/abc222/submissions/26444920

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, p, count = 0;
  cin >> n >> p;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a.at(i);
    if(a.at(i) < p) count++;
  }
    cout << count;
}
