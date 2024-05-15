#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<char> n(4);
  for(int i = 0; i < 4; i++) cin >> n[i];
  sort(n.begin(), n.end());
  if(n[0] == '1' && n[1] == '4' && n[2] == '7' && n[3] == '9') cout << "YES";
  else cout << "NO";
}