#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> a(300009, 0);
  int x;
  while(cin >> x) a[x]++;

  int sum = 0;
  while(k--) {
    for(int i = 0; i < 300009; i++) {
      if(a[i] > 0) a[i]--;
      else {
        sum += i;
        break;
      }
    }
  }

  cout << sum;
  return 0;
}