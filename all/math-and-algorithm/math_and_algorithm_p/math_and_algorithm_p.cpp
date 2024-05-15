#include <bits/stdc++.h>
using namespace std;

//複数の整数からGCDを求める関数
//最大公約数を求める複数の整数を全て入れる配列
vector<long long> integers;

long long gcdMultiple() {
  while(integers.size() > 1) {
    integers.push_back(gcd(integers[0], integers[1]));
    integers.erase(integers.begin() + 1);
    integers.erase(integers.begin());
  }
  return integers[0];
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n; cin >> n;
  while(cin >> n) integers.push_back(n);
  cout << gcdMultiple();
}