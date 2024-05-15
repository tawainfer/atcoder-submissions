#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n; cin >> n;
  long long a[5] = {0};
  while(cin >> n) a[n/100]++;
  cout << a[1] * a[4] + a[2] * a[3];
}