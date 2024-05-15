#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, odd = 0, even = 0;
  cin >> k;
  for(int i = 1; i < k + 1; i++) {
    if(i % 2 == 0) even++;
    else odd++;
  }
  cout << odd * even;
}