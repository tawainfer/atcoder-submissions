// https://atcoder.jp/contests/abc062/submissions/25854186

#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  char ch;
  
  for(int i = 0; i < W + 2; i++) cout << '#';
  cout << endl;
  
  for(int i = 0; i < H * W; i++) {
    cin >> ch;
    if(W == 1) cout << '#';
      
    if(i % W == W - 1) cout << ch << '#' << endl;
    else if(i % W == 0) cout << '#' << ch;
    else cout << ch;
  }
  
  for(int i = 0; i < W + 2; i++) cout << '#';
}
