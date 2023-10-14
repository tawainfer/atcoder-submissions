// https://atcoder.jp/contests/abc206/submissions/46502984

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    int s = n * 108 / 100;

    if(s < 206)
    {
      Console.WriteLine("Yay!");
    }
    else if(s > 206)
    {
      Console.WriteLine(":(");
    }
    else
    {
      Console.WriteLine("so-so");
    }
  }
}

