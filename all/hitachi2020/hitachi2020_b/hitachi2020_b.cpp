#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, m; cin >> a >> b >> m;
  int A[a], B[b];
  for(int i = 0; i < a; i++) cin >> A[i];
  for(int i = 0; i < b; i++) cin >> B[i];
  int normal = *min_element(A, A + a) + *min_element(B, B + b);
  for(int i = 0; i < m; i++) {
    int x, y, c;
    cin >> x >> y >> c;
    if(A[x-1] + B[y-1] - c < normal) normal = A[x-1] + B[y-1] - c;
  }
  cout << normal;
}