// https://atcoder.jp/contests/abc149/submissions/30340567

#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(long long judge_number) {
  for(long long i = 2; i * i <= judge_number; i++) {
    if(judge_number % i == 0) return false;
  }
  return true;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long x; cin >> x;
  for(;; x++) if(isPrimeNumber(x)) {
    cout << x;
    return 0;
  }
}
