#include <bits/stdc++.h>
using namespace std;
int main() {
int H, W, N;
    cin >> H >> W >> N;

    int ma = max(H, W);
    int ans = (N + ma - 1) / ma;
    cout << ans << endl;
}