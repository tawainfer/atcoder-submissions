// https://atcoder.jp/contests/abc088/submissions/26252413

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a = 0, b = 0;
  cin >> n;
  vector<int> card(n);
  for(int i = 0; i < n; i++) {
    cin >> card.at(i);
  }
  
  sort(card.begin(), card.end());
  reverse(card.begin(), card.end());
  
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) a += card.at(i);
    else b += card.at(i);
  }
  cout << a - b;
}
