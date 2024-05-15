#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  int n;
  cin >> n;

  vector<int> p(n), q(n);
  for(auto &z : p) cin >> z;
  for(auto &z : q) cin >> z;

  vector<int> v(n);
  for(int i = 0; i < n; i++) v[i] = i + 1;

  int cnt = 1;
  int a, b;
  do {
    for(int i = 0; i < n; i++) {
      if(v[i] != p[i]) break;
      if(i == n - 1) a = cnt;
    }

    for(int i = 0; i < n; i++) {
      if(v[i] != q[i]) break;
      if(i == n - 1) b = cnt;
    }

    cnt++;
  } while(next_permutation(v.begin(), v.end()));

  cout << abs(a - b);
  return 0;
}