#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  vector<ll> t = {1, 5, 10, 50, 100, 500};
  vector<ll> m(6);
  for(auto &z : m) cin >> z;

  ll n;
  cin >> n;

  vector<ll> x(n);
  for(auto &z : x) cin >> z;

  for(int i = 0; i < n; i++) {
    while(x[i] >= 1) {
      int j = 5;
      while(j >= 0) {
        if(m[j] >= 1 && x[i] >= t[j]) {
          m[j]--;
          x[i] -= t[j];
        } else {
          j--;
        }
      }

      if(x[i] != 0) {
        cout << "No";
        return 0;
      }
    }
  }

  cout << "Yes";
}