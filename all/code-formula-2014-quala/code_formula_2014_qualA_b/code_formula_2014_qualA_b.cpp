#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int a, b; cin >> a >> b;
  vector<char> v(10, 'x');
  
  for(int i = 0; i < a; i++) {
    cin >> b;
    if(b != 0) v[b-1] = '.';
    else v[9] = '.';
  }
  while(cin >> b) {
    if(b != 0) v[b-1] = 'o';
    else v[9] = 'o';
  }
  
  cout << v[6] << " " << v[7] << " " << v[8] << " " << v[9] << "\n";
  cout << " " << v[3] << " " << v[4] << " " << v[5] << "\n";
  cout << "  " << v[1] << " " << v[2] << "\n";
  cout << "   " << v[0] << "\n";
}