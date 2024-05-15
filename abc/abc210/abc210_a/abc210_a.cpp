#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, A, X, Y, count = 0;
  cin >> N >> A >> X >> Y;
  for(int i = 0; i < N; i++) {
    if(i >= A) {
      count += Y;
    } else {
      count += X;
    }
  }
  cout << count;
}