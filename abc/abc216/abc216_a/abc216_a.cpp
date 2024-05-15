#include <bits/stdc++.h>
using namespace std;

int main() {
  double number;
  cin >> number;
  int N = number * 10;
    if(N % 10 < 3) {
      cout << N / 10 << '-';
    } else if(N % 10 < 7){
      cout << N / 10;
    } else {
      cout << N / 10 << '+';
    }
}
