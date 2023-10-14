// https://atcoder.jp/contests/abc219/submissions/46503021

using System;

public class A
{
  static void Main()
  {
    int x = int.Parse(Console.ReadLine());
    if(x < 40)
    {
      Console.WriteLine(40 - x);
    }
    else if(x < 70)
    {
      Console.WriteLine(70 - x);
    }
    else if(x < 90)
    {
      Console.WriteLine(90 - x);
    }
    else
    {
      Console.WriteLine("expert");
    }
  }
}

