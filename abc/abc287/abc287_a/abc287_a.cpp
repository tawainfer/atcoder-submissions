#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  string s;
  while (cin >> s) {
    if (s == "For") cnt++;
  }

  if (n / 2 < cnt)
    cout << "Yes";
  else
    cout << "No";
}