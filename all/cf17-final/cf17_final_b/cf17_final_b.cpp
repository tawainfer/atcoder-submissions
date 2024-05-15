#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  cin >> s;
  
  int a = 0;
  int b = 0;
  int c = 0;

  for(auto &z : s) {
    if(z == 'a') a++;
    if(z == 'b') b++;
    if(z == 'c') c++;
  }

  if(max(a, max(b, c)) - min(a, min(b, c)) < 2) cout << "YES";
  else cout << "NO";
}