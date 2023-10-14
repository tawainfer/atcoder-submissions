// https://atcoder.jp/contests/abc193/submissions/46508353

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    double a = double.Parse(t[0]);
    double b = double.Parse(t[1]);

    Console.Write(100 - b / a * 100);
  }
}

