// https://atcoder.jp/contests/abc090/submissions/25481150

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, count = 0;
  string front, back, first, ten, hundred, thousand, tenthousand;
  cin >> A >> B;
  
  for(; A < B + 1; A++) {
    first = to_string(A % 10);
    ten = to_string(A / 10 % 10);
    hundred = to_string(A / 100 % 10);
    thousand = to_string(A / 1000 % 10);
    tenthousand = to_string(A / 10000 % 10);
    
    front = first + ten + hundred + thousand + tenthousand;
    back = tenthousand + thousand + hundred + ten + first;
    
    if(front == back && first != "0") count++;
  }
  
  cout << count;
}
