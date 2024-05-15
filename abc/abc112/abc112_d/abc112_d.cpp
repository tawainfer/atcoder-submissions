#include <bits/stdc++.h>
using namespace std;

set<int> prime_factorization(int n) {
  set<int> res;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      res.insert(i);
      res.insert(n / i);
    }
  }

  return res;
}

int main() {
  int n, m;
  cin >> n >> m;

  set<int> primes = prime_factorization(m);
  
  int ans = 0;
  for(int p : primes) {
    if(m / p >= n) {
      ans = p;
    }
  }

  cout << ans;
  return 0;
}