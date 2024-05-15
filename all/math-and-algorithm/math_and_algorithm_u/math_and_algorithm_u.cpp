#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n, r, numerator = 0, denominator = 0; cin >> n >> r;
  if(n - r != 0) r = min(r, n - r);
  for(int i = 0; i < r; i++) {
    if(i == 0) numerator += n;
    else numerator *= n - i;
  }
  for(int i = 1; i <= r; i++) {
    if(i == 1) denominator += i;
    else denominator *= i;
  }
  cout << numerator / denominator;
}