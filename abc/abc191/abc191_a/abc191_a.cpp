#include <bits/stdc++.h>
using namespace std;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;
  double sec = (double)D / (double)V;
  
  if(sec >= T && sec <= S) cout << "No";
  else cout << "Yes";
}