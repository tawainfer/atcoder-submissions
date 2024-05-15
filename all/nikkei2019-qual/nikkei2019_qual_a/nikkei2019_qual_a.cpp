#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  cout << min(a, b) << endl;
  if(a + b < n) cout << 0;
  else cout << a + b - n;
}