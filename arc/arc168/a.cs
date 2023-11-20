// https://atcoder.jp/contests/arc168/submissions/47771582

using System;
using static System.Console;

public class A
{
  static void Main()
  {
    long n = long.Parse(ReadLine());
    string s = ReadLine() + "<";

    long ans = 0;
    long cnt = 0;

    for(int i = 0; i < n; i++) {
      if(s[i] == '<') {
        ans += cnt * (cnt + 1) / 2;
        cnt = 0;
      } else if(s[i] == '>') {
        cnt++;
      }
    }

    Write(ans);
  }
}

