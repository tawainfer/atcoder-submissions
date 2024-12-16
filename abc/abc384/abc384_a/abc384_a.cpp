#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  char c1, c2;
  cin >> c1 >> c2;

  string s;
  cin >> s;

  for(char c : s) {
    cout << (c != c1 ? c2 : c);
  }
}