#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  int cnt = 0;
  cin >> S;
  for(int i = 0; i < 9; i++) {
    string s=S.substr(i,4);
    if(s=="ZONe") cnt++;
  }
  cout << cnt << endl;
  return 0;
}
