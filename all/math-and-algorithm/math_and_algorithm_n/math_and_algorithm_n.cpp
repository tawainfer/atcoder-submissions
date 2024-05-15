#include <bits/stdc++.h>
using namespace std;

void primeFactorization(long long dividend) {
  for(long long index = 2; index <= floor(sqrt(dividend)); index++) {
    while(dividend % index == 0) {
      dividend /= index;
      cout << index << " ";
    }
  }
  if(dividend >= 2) cout << dividend << "\n";
}

int main() {
  long long n; cin >> n;
  primeFactorization(n);
}