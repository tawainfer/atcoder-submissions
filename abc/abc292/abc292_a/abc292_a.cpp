#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for(auto c : s) cout << (char)(c - 32);
}