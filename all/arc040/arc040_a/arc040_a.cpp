#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(0);
  
  int n, t = 0, a = 0; cin >> n;
  char c;
  while(cin >> c) {
    if(c == 'R') t++;
    if(c == 'B') a++;
  }
  if(t > a) cout << "TAKAHASHI";
  else if(t == a) cout << "DRAW";
  else cout << "AOKI";
  cout << "\n";
}