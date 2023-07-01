// https://atcoder.jp/contests/abc206/submissions/25512211

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  double money = N * 1.08;
  if((int)money < 206) cout << "Yay!";
  else if((int)money == 206) cout << "so-so";
  else cout << ":(";
}
