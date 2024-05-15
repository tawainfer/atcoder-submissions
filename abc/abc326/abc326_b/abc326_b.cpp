#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = n; i <= 999; i++) {
    string s = to_string(i);
    int a = (int)(s[0] - 48);
    int b = (int)(s[1] - 48);
    
    if(a * b >= 10) continue;
    if((char)(a * b + 48) == s[2]) {
      cout << i;
      return 0;
    }
  }
}