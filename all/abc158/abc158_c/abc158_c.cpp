#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int a, b; cin >> a >> b;
  for(int i = 1; i <= 1000; i++) {
    if(floor(i * 0.08) == a && floor(i * 0.1) == b) {
      cout << i;
      return 0;
    }
  }
  cout << -1;
}