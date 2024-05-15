#include<bits/stdc++.h>
using namespace std;
int A, B, C;
int main() {
  cin >> A >> B >> C;
  if(A < B) swap(A, B);
  if(A < C) swap(A, C);
  cout << A * 10 + B + C;
}