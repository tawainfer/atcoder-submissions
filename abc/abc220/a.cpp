// https://atcoder.jp/contests/abc220/submissions/26199086

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int Y = b / c * c;
    if(a <= Y) {
      cout << Y << endl;
    } else {
      cout << -1 << endl;
    }
}

