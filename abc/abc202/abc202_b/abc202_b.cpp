#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  reverse(s.begin(), s.end());
  for(int i = 0; i < s.size(); i++) {
    if(s.at(i) == '6') cout << '9';
    else if(s.at(i) == '9') cout << '6';
    else cout << s.at(i);
  }
}