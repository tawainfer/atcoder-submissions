#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  long long n, x, sum = 0; cin >> n;
  vector<long long> a(n);
  for(auto& z : a) {cin >> z; sum += z;}
  cin >> x;
  
  long long p = x / sum;
  long long sumb = p * sum;
  long long ans = p * n;
  
  for(auto z : a) {
    sumb += z;
    ans++;
    if(sumb > x) {cout << ans; return 0;}
  }
}