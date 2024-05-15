#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  string s, t; cin >> s;
  for(int i = 0; i < s.size(); i++) {
    t = s.substr(i, 6);
    if(t == "HAGIYA") {
      s.erase(i + 4, 2);
      s.insert(s.begin() + i + 4, 'E');
            s.insert(s.begin() + i + 4, 'L');
            s.insert(s.begin() + i + 4, 'I');
            s.insert(s.begin() + i + 4, 'X');
      break;
    }
  }
  cout << s << endl;
}