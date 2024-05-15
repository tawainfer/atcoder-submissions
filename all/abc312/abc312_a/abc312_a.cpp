#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> ptn = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  for(auto t : ptn) {
    if(s == t) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
  return 0;
}