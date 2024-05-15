#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  n = 0;

  int x;
  while(cin >> x) n += x;

  cout << n;
  return 0;
}