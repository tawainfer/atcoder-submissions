#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  cout << min(abs(x - 1), abs(x - n));
}