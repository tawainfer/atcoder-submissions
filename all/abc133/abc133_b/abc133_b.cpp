#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, d, ans = 0; cin >> n >> d;
  double sum = 0;
  long long x[n][d];
  for(int i = 0; i < n; i++) for(int k = 0; k < d; k++) cin >> x[i][k];
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      for(int k = 0; k < d; k++) {
        sum += pow(x[i][k] - x[j][k], 2);
      }
      sum = sqrt(sum);
      if(sum == ceil(sum)) ans++;
      sum = 0;
    }
  }
  cout << ans;
}