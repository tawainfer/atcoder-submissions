#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, count = 1;
  cin >> N;
  vector<int> Q(N);
  
  for(int i = 0; i < N; i++) {
    cin >> P;
    Q.at(P - 1) = count;
    count++;
  }
  
  for(int i = 0; i < N; i++) cout << Q.at(i) << " ";
}