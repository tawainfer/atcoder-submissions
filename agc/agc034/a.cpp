// https://atcoder.jp/contests/agc034/submissions/39108703

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, b, c, d;
  string s;
  cin >> n >> a >> b >> c >> d >> s;

  if (c > d) {
    for (int i = b - 2; i < d - 1; i++) {
      if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
        cout << "Yes";
        return 0;
      }
    }

    cout << "No";
    return 0;
  }

  if (c < d) {
    for (int i = a - 1; i < c - 1; i++) {
      if (s[i] == '#' && s[i + 1] == '#') {
        cout << "No";
        return 0;
      }
    }

    for (int i = b - 1; i < d - 1; i++) {
      if (s[i] == '#' && s[i + 1] == '#') {
        cout << "No";
        return 0;
      }
    }

    cout << "Yes";
    return 0;
  }
}
