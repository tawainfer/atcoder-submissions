// https://atcoder.jp/contests/abc337/submissions/49436508

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int t = 0;
  int a = 0;

  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    t += x;
    a += y;
  }

  if(t > a) {
    cout << "Takahashi";
  } else if(t == a) {
    cout << "Draw";
  } else {
    cout << "Aoki";
  }
}
