#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  cin >> s;

  if('A' <= s[0] && s[0] <= 'Z' && 'A' <= s[s.size() - 1] &&
     s[s.size() - 1] <= 'Z') {
    if(s.size() == 8) {
      if('0' < s[1] && s[1] <= '9') {
        for(int i = 2; i < 7; i++) {
          if(!('0' <= s[i] && s[i] <= '9')) {
            cout << "No";
            return 0;
          }
        }

        cout << "Yes";
      } else {
        cout << "No";
      }
    } else {
      cout << "No";
    }
  } else {
    cout << "No";
  }
}