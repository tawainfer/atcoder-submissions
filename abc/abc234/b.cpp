// https://atcoder.jp/contests/abc234/submissions/28397029

#include <bits/stdc++.h>
using namespace std;
int main() {
  double max = 0;
  int n;
  cin >> n;
  int x[n], y[n];
  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
  
  for(int i = 0; i < n; i++) {
    for(int k = i + 1; k < n; k++) {
      double dis = sqrt(pow((x[i]-x[k]), 2) + pow((y[i]-y[k]), 2));
      if(max < dis) max = dis;
    }
  }
  printf("%.10f\n", max);
}
