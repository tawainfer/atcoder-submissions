#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &z : a) {
    cin >> z;
    if(z % 2 == 0) cout << z << " ";
  }
}