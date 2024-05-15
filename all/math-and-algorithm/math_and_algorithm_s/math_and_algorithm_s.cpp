#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  long long n; cin >> n;
  long long a = 0, b = 0, c = 0;
  while(cin >> n) {
    if(n == 1) a++;
    else if(n == 2) b++;
    else c++;
  }
  cout << a * (a - 1) / 2 + b * (b - 1) / 2 + c * (c - 1) / 2;
}