// https://atcoder.jp/contests/abc199/submissions/46502995

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int c = int.Parse(t[2]);

    if(a * a + b * b < c * c)
    {
      Console.WriteLine("Yes");
    }
    else
    {
      Console.WriteLine("No");
    }
  }
}

