#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cnt = 0; cin >> n;
  char r;
  while(cin >> r) if(r == 'R') cnt++;
  if(n - cnt < cnt) cout << "Yes";
  else cout << "No";
}