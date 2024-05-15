#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, n, maxa = 0, maxab = 0; cin >> n;
  while(cin >> a >> b) if(a > maxa) {maxa = a; maxab = a + b;}
  cout << maxab;
}