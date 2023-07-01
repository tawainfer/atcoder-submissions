// https://atcoder.jp/contests/abc224/submissions/28032050

#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
int main() { 
  int H, W; cin >> H >> W;
  int A[55][55];
  rep(i, H) rep(j, W) cin >> A[i][j];
  bool ok = true;
  rep(i, H-1) rep(j, W-1){
  if(A[i][j] + A[i+1][j+1] > A[i][j+1] + A[i+1][j]) {
    cout << "No" << endl;
     return 0;
   }
 }
 cout << "Yes" << endl;
}
