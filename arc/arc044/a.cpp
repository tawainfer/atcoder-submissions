// https://atcoder.jp/contests/arc044/submissions/29383658

#include <bits/stdc++.h>
using namespace std;

bool judgePrimeNumber(long long judgeNumber) {
  for(long long index = 2; index <= floor(sqrt(judgeNumber)); index++) {
    if(judgeNumber % index == 0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long n; cin >> n;
  if(n == 1) {cout << "Not Prime\n"; return 0;}
  if(judgePrimeNumber(n)) {cout << "Prime\n"; return 0;}
  
  int first = n % 10, sum = 0, N = n;
  while(N >= 10) {
    sum += N % 10;
    N /= 10;
  }
  sum += N;
  
  if(first % 2 == 1 && first != 5 && sum % 3 != 0) cout << "Prime\n";
  else cout << "Not Prime\n";
}
