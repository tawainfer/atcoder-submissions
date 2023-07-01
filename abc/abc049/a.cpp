// https://atcoder.jp/contests/abc049/submissions/25486010

#include <bits/stdc++.h>
using namespace std;

int main() {
  char ch;
  cin >> ch;
  
  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    cout << "vowel";
  } else {
    cout << "consonant";
  }
}

