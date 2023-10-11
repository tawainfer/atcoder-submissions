// https://atcoder.jp/contests/abc279/submissions/46443552

using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    int ans = 0;

    for(int i = 0; i < s.Length; i++)
    {
      if(s[i] == 'v')
      {
        ans++;
      }
      else
      {
        ans += 2;
      }
    }

    Console.WriteLine(ans);
  }
}

