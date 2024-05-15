#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
  for(int i = 2; i * i <= x; i++) if(x % i == 0) return false;
  return true;
}

int main() {
  int q;
  cin >> q;

  int x;
  while(cin >> x) cout << (is_prime(x) ? "Yes\n" : "No\n");
}