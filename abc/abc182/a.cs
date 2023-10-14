// https://atcoder.jp/contests/abc182/submissions/46505910

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    Console.Write(2 * a + 100 - b);
  }
}

