#include <bits/stdc++.h>
using namespace std;
int main() {
  int h, w; cin >> h >> w;
  char c[w];
  for(int i = 0; i < h; i++) {
    for(int k = 0; k < w; k++) {
      cin >> c[k];
      cout << c[k];
    }
    cout << "\n";
    for(int k = 0; k < w; k++) cout << c[k];
    cout << "\n";
  }
}