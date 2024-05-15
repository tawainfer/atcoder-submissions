#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  int fac[11] = {0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
  int cnt = 0;

  while(n > 0) {
    if(n >= fac[10]) {cnt++; n -= fac[10];}
    else if(n >= fac[9]) {cnt++; n -= fac[9];}
    else if(n >= fac[8]) {cnt++; n -= fac[8];}
    else if(n >= fac[7]) {cnt++; n -= fac[7];}
    else if(n >= fac[6]) {cnt++; n -= fac[6];}
    else if(n >= fac[5]) {cnt++; n -= fac[5];}
    else if(n >= fac[4]) {cnt++; n -= fac[4];}
    else if(n >= fac[3]) {cnt++; n -= fac[3];}
    else if(n >= fac[2]) {cnt++; n -= fac[2];}
    else if(n >= fac[1]) {cnt++; n -= fac[1];}
  }
  cout << cnt;
}