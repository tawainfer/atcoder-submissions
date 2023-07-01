// https://atcoder.jp/contests/arc136/submissions/29744542

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n; cin >> n;
  string s; cin >> s;
  string bb = "BB";
  for(int i = 0; i < s.size()-1; i++) {
    if(s[i] == 'B' && s[i+1] == 'B') {s.erase(i, 2); s.insert(i, "A"); i--;}
    else if(s[i] == 'B' && s[i+1] == 'A') {s.replace(i+1, 1, "B"); s.insert(i+1, "B"); i--;}
  }
  cout << s;
}
