// https://atcoder.jp/contests/abc180/submissions/46505941

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int a = int.Parse(t[1]);
    int b = int.Parse(t[2]);

    Console.Write(n - a + b);
  }
}

