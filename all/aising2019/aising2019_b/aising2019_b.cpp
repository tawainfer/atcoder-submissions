#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, f = 0, s = 0, t = 0; cin >> n >> a >> b;
  while(cin >> n) {
    if(n <= a) f++;
    else if(n <= b) s++;
    else t++;
  }
  cout << min({f, s, t});
}