#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int a[3], cnt = 0;
  cin >> a[0] >> a[1] >> a[2];
  
  while(!(a[0] == a[1] && a[1] == a[2])) {
    cnt++;
    sort(a, a + 3);
    
    if(a[1] == a[2]) a[0] += 2;
    else {a[0]++; a[1]++;}
  }
  cout << cnt;
}