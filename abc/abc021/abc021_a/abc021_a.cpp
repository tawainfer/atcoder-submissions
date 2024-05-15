#include <bits/stdc++.h>
using namespace std;
int main() {
  int N; cin >> N;
  set<int> s;
  if(N > 7) {s.insert(8); N -= 8;}
  if(N > 3) {s.insert(4); N -= 4;}
  if(N > 1) {s.insert(2); N -= 2;}
  if(N > 0) {s.insert(1); --N;}
  cout << s.size() << endl;
  for(auto x:s) cout << x << endl;
}