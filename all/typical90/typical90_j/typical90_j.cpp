#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int c[n+1] = {0}, p[n+1] = {0}, s1[n+1] = {0}, s2[n+1] = {0};
  for(int i= 1; i <= n; i++) {
    cin >> c[i] >> p[i];
      s1[i] = s1[i-1];
      s2[i] = s2[i-1];
    if(c[i] == 1) s1[i] += p[i];
    else s2[i] += p[i];
  }
  int q, l, r; cin >> q;
  while(cin >> l >> r) cout << s1[r] - s1[l-1] << " " << s2[r] - s2[l-1] << "\n";
}