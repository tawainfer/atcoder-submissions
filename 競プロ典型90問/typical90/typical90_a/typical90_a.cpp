#include <bits/stdc++.h>
using namespace std;

int n, l, k;

bool solve(int m, vector<int> a, vector<int> b) {
  int cnt = 0;
  int size = 0;

  for(int i = 0; i < n; i++) {
    size += b[i];
    if(size >= m) {
      size = 0;
      cnt++;
    }
  }

  if(cnt > k) {
    return true;
  } else if(cnt == k) {
    if(size + (l - a.back()) >= m) return true;
    else return false;
  } else {
    return false;
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> n >> l >> k;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<int> b(n);
  for(int i = 0; i < n; i++) {
    if(i == 0) b[0] = a[0];
    else b[i] = a[i] - a[i - 1];
  }

  int ok = 1;
  int ng = l;

  while((ng - ok) > 1) {
    int mid = (ok + ng) / 2;
    if(solve(mid, a, b)) ok = mid;
    else ng = mid;
  }

  cout << ok;
}