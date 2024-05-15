#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'C') ans = 1;
      else if( ans == 1 && s[i] == 'F') ans++;
    }
    if(ans == 2) cout << "Yes";
    else cout << "No";
}