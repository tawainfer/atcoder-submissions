#include <bits/stdc++.h>
using namespace std;

set<long long> divisor;
 
void divisorEnumeration(long long dividend) {
  for(long long i = 1; i * i <= dividend; i++) {
    if(dividend % i != 0) continue;
    divisor.insert(i);
    if(i != dividend / i) divisor.insert(dividend / i);
  }
  
  for(auto x : divisor) cout << x << "\n";
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  long long n; cin >> n;
  divisorEnumeration(n);
}