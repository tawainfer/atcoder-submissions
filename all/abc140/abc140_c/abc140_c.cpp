#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, sum = 0;
  cin >> n;
  int a[n];
  vector<int> b(n - 1);
  for(auto& z : b) cin >> z;
  a[0] = b[0];

  for(int i = 0; i < n - 1; i++) {
    a[i+1] = b[i];
    if(i != 0) if(a[i] > b[i]) a[i] = b[i];
    sum += a[i];
  }
  sum += a[n-1];
  cout << sum;
}