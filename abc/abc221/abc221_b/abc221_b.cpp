#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, t, ans = "No";
  cin >> s >> t;
  if(s == t) {
    ans = "Yes";
  } else if((s != t) && (s.size() == t.size())) {
    for(int i = 0; i < s.size(); i++) {
      if((0 < i) && (s.at(i) != t.at(i))) {
        swap(s.at(i - 1), s.at(i));
        if(s == t) ans = "Yes";
        swap(s.at(i - 1), s.at(i));
      }
    }
  }
  cout << ans;
}