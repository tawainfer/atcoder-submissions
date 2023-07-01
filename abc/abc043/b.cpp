// https://atcoder.jp/contests/abc043/submissions/29412060

#include <bits/stdc++.h>
using namespace std;
int main() {cin.tie(nullptr);ios_base::sync_with_stdio(false);char in;string out = "";while(cin >> in){if(out != "" && in == 'B') out.erase(out.size()-1);else if(in == 'B') continue;else out += in;}cout << out;}
