#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, k; cin >> a >> b >> k;
   vector<int> v;
  for(int i = 100; i >= 1; i--) if(a % i == 0 && b % i == 0) v.push_back(i);
  cout << v[k-1];
}