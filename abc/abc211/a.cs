// https://atcoder.jp/contests/abc211/submissions/46503037

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    double a = double.Parse(t[0]);
    double b = double.Parse(t[1]);

    Console.WriteLine((a - b) / 3 + b);
  }
}

