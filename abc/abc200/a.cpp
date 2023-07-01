// https://atcoder.jp/contests/abc200/submissions/25512513

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, count = 0;
  cin >> N;
  for(int i = 0; i < N; i += 100) count++;
  cout << count;
}
