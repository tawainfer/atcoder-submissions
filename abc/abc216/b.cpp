// https://atcoder.jp/contests/abc216/submissions/25671303

#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; 
  cin >> N;
  vector<string> S(N), T(N);
  string answer = "No";
  for(int i = 0; i < N; i++) {
	cin >> S[i] >> T[i];
	for(int j = 0; j < i; j++) {
	  if(S[i] == S[j] && T[i] == T[j]) answer = "Yes";
	}
  }
  
  cout << answer << endl;
}
