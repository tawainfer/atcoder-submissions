#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<char> s(50);
  int k = 0;
  while(cin >> s[k]) k++; 
  for(int i = 0; i < k - 8; i++) cout << s[i];
}