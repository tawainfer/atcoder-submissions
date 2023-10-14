// https://atcoder.jp/contests/abc256/submissions/46503119

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    int ans = 1;

    for(int i = 0; i < n; i++)
    {
      ans *= 2;
    }

    Console.Write(ans);
  }
}

