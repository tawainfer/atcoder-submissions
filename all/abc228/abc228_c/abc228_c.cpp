#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k; cin >> n >> k;
  int a, b, c;
  int p[n], q[n];
  for(int i = 0; cin >> a >> b >> c; i++) {p[i] = a + b + c; q[i] = p[i];}
  sort(p, p + n);
  reverse(p, p + n);
  int border = p[k-1];
  for(int i = 0; i < n; i++) {
    if(border <= q[i] + 300) cout << "Yes";
    else cout << "No";
    cout << endl;
  }
}