#include <bits/stdc++.h>
using namespace std;
int main() {
  int count = 0;
  char S[3];
  for(int i = 0; i < 3; i++) cin >> S[i];
  if(S[0] == 'R' && S[1] == 'R' && S[2] == 'R') count += 3;
  else if(S[1] == 'R' && (S[0] == 'R' || S[2] == 'R')) count += 2;
  else if(S[0] == 'R' || S[1] == 'R' || S[2] == 'R') count++;
  cout << count;
}