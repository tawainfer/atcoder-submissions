// https://atcoder.jp/contests/abc231/submissions/27820546

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, max = 0;
    string S, ans;
    map<string, int> m;
    cin >> N;
    for (int i = 0; i < N; i++) 
    {
        cin >> S;
        m[S]++;
        if (max < m[S]) {
            max = m[S];
            ans = S;
        }
    }
    cout << ans << endl;
    return 0;
}
