// https://atcoder.jp/contests/abc218/submissions/25752463

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<char> S(7);
  cin >> N;
  for(int i = 0; i < 7; i++) cin >> S.at(i);
  if(S.at(N - 1) == 'o') cout << "Yes";
  else cout << "No";
}

