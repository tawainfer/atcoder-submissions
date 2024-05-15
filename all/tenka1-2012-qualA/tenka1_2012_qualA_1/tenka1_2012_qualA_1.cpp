#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  long long a[10000] = {1,1};
  int n; cin >> n;
  for(int i = 2; i <= n; i++) a[i] = a[i-1] + a[i-2];
    cout << a[n] << endl;
}