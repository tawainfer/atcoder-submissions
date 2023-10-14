// https://atcoder.jp/contests/abc184/submissions/46503078

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    t = Console.ReadLine().Split(" ");
    int c = int.Parse(t[0]);
    int d = int.Parse(t[1]);

    Console.WriteLine(a * d - b * c);
  }
}

