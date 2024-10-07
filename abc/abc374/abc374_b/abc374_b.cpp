#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  
  vector<char> u, v;
  for(char c : s) u.push_back(c);
  for(char c : t) v.push_back(c);
  while(u.size() < v.size()) u.push_back('!');
  while(u.size() > v.size()) v.push_back('!');
  
  for(int i = 0; i < u.size(); i++) {
    if(u[i] != v[i]) {
      cout << i + 1;
      return 0;
    }
  }
  
  cout << 0;
}