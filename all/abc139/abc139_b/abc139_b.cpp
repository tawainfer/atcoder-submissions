#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c = 1, i = 0; cin >> a >> b;
  while(c < b) {
    c--;
    c += a;
    i++;
  }
  cout << i;
}