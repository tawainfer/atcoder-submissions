// https://atcoder.jp/contests/abc305/submissions/46508749

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    if(n % 5 <= 2)
    {
      Console.Write(n - n % 5);
    }
    else
    {
      Console.Write(n + (5 - n % 5));
    }
  }
}

