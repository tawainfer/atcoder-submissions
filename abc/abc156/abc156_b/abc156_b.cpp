#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, i = 1; cin >> n >> k;
  while(pow(k, i) <= n) i++;
  cout << i;
}