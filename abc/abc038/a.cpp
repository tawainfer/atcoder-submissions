// https://atcoder.jp/contests/abc038/submissions/25487039

#include <bits/stdc++.h>
using namespace std;

int main() {
  string drink;
  cin >> drink;
  
  if(drink.at(drink.size() - 1) == 'T') {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
