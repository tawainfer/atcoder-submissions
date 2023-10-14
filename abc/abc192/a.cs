// https://atcoder.jp/contests/abc192/submissions/46503292

using System;

public class A
{
  static void Main()
  {
    int x = int.Parse(Console.ReadLine());
    if(x % 100 == 0)
    {
      Console.Write(100);
    }
    else
    {
      Console.Write(100 - x % 100);
    }
  }
}

