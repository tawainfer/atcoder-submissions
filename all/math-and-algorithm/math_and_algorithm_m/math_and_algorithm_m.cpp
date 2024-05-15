#include <bits/stdc++.h>
using namespace std;

//約数列挙 昇順に改行区切りで出力する 計算量O(√N)
//約数を保管する配列
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
  long long n; cin >> n;
  divisorEnumeration(n);
}