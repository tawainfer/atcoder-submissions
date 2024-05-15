#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  set<string> ans;
  for(int bit = 0; bit < (1 << n); bit++) {
    string s = "";
    int range = 0;
    bool check = true;

    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) s += "(";
      else s += ")";
    }

    for(int j = 0; j < n; j++) {
      if(s[j] == '(') range++;
      else {
        range--;
        if(range < 0) check = false;
      }
    }

    if(range != 0) check = false;
    if(check) ans.insert(s);
  }

  for(auto &z : ans) cout << z << "\n";
  return 0;
}