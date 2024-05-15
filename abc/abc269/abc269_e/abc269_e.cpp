#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ok = 0, ng = n + 1;
  while(ng - ok > 1) {
    int mid = (ok + ng) / 2;
    cout << "? " << 1 << " " << mid << " " << 1 << " " << n << endl;

    int z;
    cin >> z;

    if(mid == z) ok = mid;
    else ng = mid;
  }
  int y = ng;

  ok = 0, ng = n + 1;
  while(ng - ok > 1) {
    int mid = (ok + ng) / 2;
    cout << "? " << 1 << " " << n << " " << 1 << " " << mid << endl;

    int z;
    cin >> z;

    if(mid == z) ok = mid;
    else ng = mid;
  }
  int x = ng;

  cout << "! " << y << " " << x << endl;
  return 0;
}