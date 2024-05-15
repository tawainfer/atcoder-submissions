#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, w, sum = 0; cin >> h >> w;
  int hw = h * w;
  int a[h][w];
  int sumh[h], sumw[w] = {0};
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> a[i][j];
      sum += a[i][j];
      sumw[j] += a[i][j];
    }
    sumh[i] = sum;
    sum = 0;
  }
  
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cout << sumh[i] + sumw[j] - a[i][j] << " ";
    }
    cout << "\n";
  }
}