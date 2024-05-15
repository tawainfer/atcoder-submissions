#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, k, s, t; cin>>a>>b>>c>>k>>s>>t;
  if (s+t>=k) {a-=c; b-=c;}
  cout << a*s+b*t << endl;
}