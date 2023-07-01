// https://atcoder.jp/contests/abc220/submissions/26679800

#include <bits/stdc++.h>
using namespace std;
int main() {
  long long k, A = 0, B = 0;
  string a, b;
  cin >> k >> a >> b;
  for(int i = 0; i < a.size(); i++) A += (long long)(a.at(i)-48) * (long long)(pow(k, a.size()-1-i));
  for(int i = 0; i < b.size(); i++) B += (long long)(b.at(i)-48) * (long long)(pow(k, b.size()-1-i));
  cout << A * B;
}
