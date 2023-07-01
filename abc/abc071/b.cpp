// https://atcoder.jp/contests/abc071/submissions/29209173

#include <bits/stdc++.h>
using namespace std;
int main() {
  char c[100000];
  for(int i = 0; cin >> c[i]; i++);
  bool app[26];
  for(int i = 0; i < 26; i++) app[i] = false;
  for(int i = 0; c[i] != '\0'; i++) app[c[i] - 'a'] = true;
  for(int i = 0; i < 26; i++) {
    if(!app[i]) {
      printf("%c\n", (char)(i + 'a'));
      return 0;
	}
  }
  cout << "None";
}
