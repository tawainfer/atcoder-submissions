#include <bits/stdc++.h>
using namespace std;

//計算量O((N-1)logS)

//最大公約数を求めたい整数を全て入れる配列(入力必要)
vector<long long> integers;

//LCMを求める関数
long long lcmMultiple() {
  while(integers.size() > 1) {
    integers.push_back(lcm(integers[0], integers[1]));
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
  cout << lcmMultiple();
}