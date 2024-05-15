#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, s = 0, i = 1; cin >> n;
  for(; n > s; i++) s += i;
  cout << i - 1;
}