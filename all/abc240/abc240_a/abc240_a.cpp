#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int a, b; cin >> a >> b;
  if((a == 1 && b == 10) || (b == 1 && a == 10)) {cout << "Yes"; return 0;}
  else if(abs(a-b) == 1) {cout << "Yes"; return 0;}
  else cout << "No";
}