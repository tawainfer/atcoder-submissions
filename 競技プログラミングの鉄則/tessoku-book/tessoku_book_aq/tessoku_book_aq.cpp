#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  
  int a;
  char b;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    if(b == 'E') a = l - a;
    ans = max(ans, a);
  }
  
  cout << ans;
  return 0;
}