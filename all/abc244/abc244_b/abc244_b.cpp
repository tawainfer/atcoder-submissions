#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s = 0, news = 0; cin >> n;
  char c;
  int x = 0, y = 0;
  
  while(cin >> c) {
    if(c == 'S') {
      if(news % 4 == 0) x++;
      else if(news % 4 == 1) y--;
      else if(news % 4 == 2) x--;
      else y++;
    } else news++;
  }
  
  cout << x << " " << y;
}