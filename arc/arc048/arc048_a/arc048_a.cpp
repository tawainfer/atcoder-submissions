#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c = 0; cin >> a >> b;
  if(a < 0 && b > 0) c--;
  cout << abs(a - b) + c << endl;
}