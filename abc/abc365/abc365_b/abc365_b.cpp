#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b.begin(), b.end());

  for(int i = 0; i < a.size(); i++) {
    if(a[i] == b[b.size() - 2]) {
      cout << i + 1;
      return 0;
    }
  }
}