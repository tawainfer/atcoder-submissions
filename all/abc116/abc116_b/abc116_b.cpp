#include<bits/stdc++.h>
using namespace std;
int f(int n) {
  if(n % 2 == 0) return n / 2;
  else return 3 * n + 1;
}

int main() {
  set<int> done;
  int s; cin >> s;
  done.insert(s);
  int before = s;
  for(int i = 1; i <= 1000000; i++) {
    int ai = f(before);
    if(done.count(ai)) {
      cout << i + 1;
      return 0;
    }
    done.insert(ai);
    before = ai;
  }
}