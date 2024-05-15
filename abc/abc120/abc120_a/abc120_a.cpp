#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a <= b) {
    if((a * c < b)) cout << c;
    else cout << b/ a;
  } else {
    cout << 0;
  }
}