// https://atcoder.jp/contests/abc156/submissions/46503348

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int r = int.Parse(t[1]);

    if(n >= 10)
    {
      Console.Write(r);
    }
    else
    {
      Console.Write(100 * (10 - n) + r);
    }
  }
}

