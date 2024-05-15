#include <bits/stdc++.h>
using namespace std; 
int main() {
  string a, b, ans = "Easy"; cin >> a >> b;
  if(a.size() >= b.size()) {
    for(int i = 0; i < b.size(); i++) if((int)a.at(a.size() - i-1) + (int)b.at(b.size() - i-1) > 105) ans = "Hard";
  } else {
    for(int i = 0; i < a.size(); i++) if((int)a.at(a.size() - i-1) + (int)b.at(b.size() - i-1) > 105) ans = "Hard";
  }
  cout << ans;
}