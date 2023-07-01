// https://atcoder.jp/contests/abc285/submissions/38049817

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i; j++) {
      if(s[j] == s[j + i + 1]) {
        // cout << i << " ";
        cout << j << endl;
        break;
      }

      if(j == n - i - 2) {
        cout << j + 1 << endl;
      }
    }
  }
}
