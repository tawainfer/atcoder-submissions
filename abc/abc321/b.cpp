// https://atcoder.jp/contests/abc321/submissions/45825518

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n - 1);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  for(int i = 0; i <= 100; i++) {
    vector<int> b;
    for(auto x : a) b.push_back(x);
    b.push_back(i);
    sort(b.begin(), b.end());

    int sum = 0;
    for(int j = 1; j < b.size() - 1; j++) {
      sum += b[j];
    }

    if(sum >= x) {
      cout << i;
      return 0;
    }
  }

  cout << -1;
}
