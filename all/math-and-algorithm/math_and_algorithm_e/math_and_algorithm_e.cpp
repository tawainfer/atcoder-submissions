#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, s = 0; cin >> n;
  while(cin >> n) s += n;
  cout << s % 100;
}