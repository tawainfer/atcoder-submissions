#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, count = 1000000000, onecount;
  cin >> N;
  
  for(int i = 0; i < N; i++) {
    cin >> A;
    onecount = 0;
    while(A % 2 == 0) {
      A /= 2;
      onecount++;
    }
    if(count > onecount) count = onecount;
  }
  cout << count;
}
