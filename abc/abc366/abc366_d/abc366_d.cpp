#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll a[109][109][109] = {0};
    ll b[109][109][109] = {0};

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                cin >> a[i][j][k];
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                b[i][j][k] = a[i][j][k]
                            + b[i-1][j][k]
                            + b[i][j-1][k]
                            + b[i][j][k-1]
                            - b[i-1][j-1][k]
                            - b[i-1][j][k-1]
                            - b[i][j-1][k-1]
                            + b[i-1][j-1][k-1];
            }
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;

        ll result = b[rx][ry][rz]
                  - b[lx-1][ry][rz]
                  - b[rx][ly-1][rz]
                  - b[rx][ry][lz-1]
                  + b[lx-1][ly-1][rz]
                  + b[lx-1][ry][lz-1]
                  + b[rx][ly-1][lz-1]
                  - b[lx-1][ly-1][lz-1];

        cout << result << endl;
    }

    return 0;
}
