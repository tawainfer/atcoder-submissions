#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k;
  string s;
  cin >> n >> s >> k;
  for(int i = 0; i < n; i++) {
    if(s[k-1] == s[i]) cout << s[i];
    else cout << '*';
  }
}