#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;

  a %= 10;

  vector<ll> power = {b % 4};
  for (int i = 0; i < 30; i++) {
    power.push_back(power.back() * power.back());
    power.back() %= 4;
  }

  bool init = true;
  ll bc = 1;

  for (int i = 0; i < 30; i++) {
    if (c & (1 << i)) {
      // if (init) {
      //   init = false;
      //   bc += power[i];
      // } else
        bc *= power[i];
      bc %= 4;
    }
  }
  if (!bc) bc = 4;
  // cout << bc << endl;

  ll abc = 1;
  for(int i = 0; i < bc; i++) {
    abc *= a;
    abc %= 10;
  }
  // cout << abc << " " << bc << endl;

  cout << abc;
  return 0;
}