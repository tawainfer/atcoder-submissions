#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  int h = n / 3600;
  n %= 3600;
  int m = n / 60;
  n %= 60;
  int s = n;
  if(h < 10) cout << 0;
  cout << h << ':';
  if(m < 10) cout << 0;
  cout << m << ':';
  if(s < 10) cout << 0;
  cout << s << "\n";
}