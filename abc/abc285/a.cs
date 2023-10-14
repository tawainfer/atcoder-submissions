// https://atcoder.jp/contests/abc285/submissions/46509367

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    if(b / 2 == a)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}

