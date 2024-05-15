#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  typedef long long ll;

  ll n;
  cin >> n;

  vector<string> op(n + 1);
  for(int i = 1; i <= n; i++) cin >> op[i];

  ll y[n + 1][2];
  y[0][0] = 1;
  y[0][1] = 1;

  for(int i = 1; i <= n; i++) {
    if(op[i] == "AND") {
      y[i][0] = y[i - 1][0] * 2 + y[i - 1][1];
      y[i][1] = y[i - 1][1];
    } else {
      y[i][0] = y[i - 1][0];
      y[i][1] = y[i - 1][0] + y[i - 1][1] * 2;
    }
    //cout << y[i][0] << " " << y[i][1] << endl;
  }

  cout << y[n][1];
  return 0;
}