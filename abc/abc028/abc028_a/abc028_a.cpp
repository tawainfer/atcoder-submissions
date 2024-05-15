#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  if(n < 60) cout << "Bad";
  else if(n < 90) cout << "Good";
  else if(n < 100) cout << "Great";
  else cout << "Perfect";
  cout << endl;
}