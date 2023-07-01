// https://atcoder.jp/contests/abc239/submissions/29458742

#include <bits/stdc++.h>
using namespace std;
//素数判定 素数ならtrue、そうでなければfalseを返す 計算量O(√N)
bool judgePrimeNumber(long long judgeNumber) {
  for(long long index = 2; index <= floor(sqrt(judgeNumber)); index++) {
    if(judgeNumber % index == 0) return false;
  }
  return true;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  long long a, b, c, d, cnt = 0; cin >> a >> b >> c >> d;
  for(long long i = a; i <= b; i++) {
    for(long long j = c; j <= d; j++) {
      if(!judgePrimeNumber(i + j)) cnt++;
    }
    if(cnt == d - c + 1) {cout << "Takahashi"; return 0;}
    cnt = 0;
  }
  
  for(long long i = a; i <= b; i++) {
    for(long long j = c; j <= d; j++) {
      if(judgePrimeNumber(i + j)) {cout << "Aoki"; return 0;}
    }
  }
  cout << "Takahashi";
}
