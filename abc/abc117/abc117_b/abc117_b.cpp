#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main() {
  int n, count = 0; cin >> n;
  int l[n];
  rep(i, n) {cin >> l[i]; count += l[i];}
  sort(l, l + n);
  if(l[n - 1] < count - l[n - 1]) cout << "Yes";
  else cout << "No";
}