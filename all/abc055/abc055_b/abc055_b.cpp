#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, mod = 1e9 + 7, sum = 1; cin >> n;
  for(int i = 1; i <= n; i++) {
    sum *= i;
    sum %= mod;
  }
  cout << sum;
}