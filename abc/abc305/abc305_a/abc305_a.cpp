#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if(n == 0) {
    cout << 0;
    return 0;
  }

  if(n % 5 == 0) cout << n;
  else if(n % 5 == 1) cout << n - 1;
  else if(n % 5 == 2) cout << n - 2;
  else if(n % 5 == 3) cout << n + 2;
  else if(n % 5 == 4) cout << n + 1;
}