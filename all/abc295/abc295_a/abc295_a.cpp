#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> w(n);
  for(auto &z : w) cin >> z;

  bool ans = false;
  for(auto &z : w) {
    if(z == "and" || z == "not" || z == "that" || z == "the" || z == "you") ans = true;
  }

  cout << (ans ? "Yes" : "No");
}