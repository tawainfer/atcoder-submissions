// https://atcoder.jp/contests/abc205/submissions/46503058

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    double b = double.Parse(t[1]);

    Console.WriteLine(b / 100 * a);
  }
}

