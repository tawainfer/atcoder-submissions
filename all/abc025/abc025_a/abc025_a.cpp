#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int n;
  cin >> s >> n;
  cout << s.at((n+4)/5-1);
  cout << s.at((n-1)%5) << endl;
}