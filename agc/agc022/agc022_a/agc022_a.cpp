#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> v;
  vector<bool> check(123, false);
  for(char c : s) {
    v.push_back(c);
    check[c] = true;
  }

  if(s.size() == 26) {
    if(s == "zyxwvutsrqponmlkjihgfedcba") cout << "-1";
    else {
      int end_pos;
      set<char> se;
      se.insert(s[25]);

      for(int i = 24; i >= 0; i--) {
        if(s[i] < s[i + 1]) {
          end_pos = i;
          if(end_pos != 0) s[i] = *(se.lower_bound(s[i]));
          else s[0]++;
          break;
        } else se.insert(s[i]);
      }
      
      for(int i = 0; i <= end_pos; i++) cout << s[i];
    }
  } else {
    cout << s;
    for(char c = 'a'; c <= 'z'; c++) {
      if(!check[c]) {
        cout << c;
        break;
      }
    }
  }
}