#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int n; cin >> n;
  for(int i = 1; i <= 9; i++) for(int j = 1; j <= 9; j++) {
    if(n == 2025 - i * j) cout << i << " x " << j << "\n";
  }
}