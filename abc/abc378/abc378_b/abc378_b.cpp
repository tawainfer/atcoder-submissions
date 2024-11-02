#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> q(n), r(n);
  for(int i = 0; i < n; i++) {
    cin >> q[i] >> r[i];
  }

  int Q;
  cin >> Q;

  for(int i = 0; i < Q; i++) {
    int t, d;
    cin >> t >> d;
    t--;

    cout << (r[t] - d % q[t] + q[t]) % q[t] + d << endl;
  }
}