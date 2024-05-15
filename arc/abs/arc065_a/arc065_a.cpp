#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, word[4] = {"eraser", "erase", "dreamer", "dream"}; cin >> s;
  for(auto w : word) s = regex_replace(s, regex(w), "");
  if(s.size() == 0) cout << "YES";
  else cout << "NO";
}