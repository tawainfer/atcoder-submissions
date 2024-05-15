#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, sum = 0; cin >> a >> b;
  if(a == b) {
    for(int i = 1; i <= a; i++) cout << i << " " << -i << " ";
  } else if(a > b) {
    for(int i = 1; i <= a; i++) {
      cout << i << " ";
      sum += i;
    }
    for(int i = 1; i <= b; i++) {
      if(i == b) cout << -sum;
      else cout << -i << " ";
      sum -= i;
    }
  } else {
    for(int i = 1; i <= b; i++) {
      cout << -i << " ";
      sum -= i;
    }
    for(int i = 1; i <= a; i++) {
      if(i == a) cout << -sum;
      else cout << i << " ";
      sum += i;
    }
  }
}