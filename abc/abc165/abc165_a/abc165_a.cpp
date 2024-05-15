#include <bits/stdc++.h>
using namespace std;
int main() {
  int k, a, b;
  cin >> k >> a >> b;
  if(a <= (b / k * k)) cout << "OK";
  else cout << "NG";
}