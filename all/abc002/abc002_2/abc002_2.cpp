#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  string x; cin >> x;
  for(auto s : x) if(s != 'a' && s != 'i' && s != 'u' && s != 'e' && s != 'o') cout << s;
  cout << "\n";
}