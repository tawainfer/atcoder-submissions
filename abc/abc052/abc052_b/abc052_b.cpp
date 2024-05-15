#include <bits/stdc++.h>
using namespace std;
int main() {
  int x = 0, max = 0, n; cin >> n;
  string s; cin >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'I') x++;
    else x--;
    if(max < x) max = x;
  }
  cout << max;
}