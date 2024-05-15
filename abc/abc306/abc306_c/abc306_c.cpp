#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(3 * n);
  for(auto &z : a) cin >> z;

  vector<int> cnt(n + 1, 0);
  for(int i = 0; i < 3 * n; i++) {
    cnt[a[i]]++;
    if(cnt[a[i]] == 2) cout << a[i] << " ";
  }
}