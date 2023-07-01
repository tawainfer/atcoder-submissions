// https://atcoder.jp/contests/abc162/submissions/29998842

#include <bits/stdc++.h>
using namespace std;

//計算量O(logS)

//最大公約数を求めたい整数を全て入れる配列(入力必要)
vector<long long> integers;

//GCDを求める関数
long long gcdMultiple() {
  while(integers.size() > 1) {
    integers.push_back(gcd(integers[0], integers[1]));
    integers.erase(integers.begin() + 1);
    integers.erase(integers.begin());
  }
  return integers[0];
}

int main() {

  int k, sum = 0;
  cin >> k;
  for(int a = 1; a <= k; a++)
    for(int b = 1; b <= k; b++)
      for(int c = 1; c <= k; c++) {
        integers.erase(integers.begin(), integers.end());
        integers.push_back(a);
        integers.push_back(b);
        integers.push_back(c);
        sum += gcdMultiple();
      }

  cout << sum;
}
