#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) cin >> z;

  vector<int> dp;
  for(int x : a) {
    auto iter = lower_bound(dp.begin(), dp.end(), x);
    if(iter == dp.end()) dp.push_back(x);
    else *iter = x;
  }

  cout << dp.size();
}