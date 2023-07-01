// https://atcoder.jp/contests/abc129/submissions/26567199

#include<bits/stdc++.h>
using namespace std;
int main(){
    int P, Q, R;
    cin >> P >> Q >> R;
    int ans = min(P + Q, Q + R);
    ans = min(ans, P + R);
    cout << ans << endl;
 }
