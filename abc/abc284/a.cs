// https://atcoder.jp/contests/abc284/submissions/46508819

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] t = new string[n];

    for(int i = 0; i < n; i++)
    {
      t[i] = Console.ReadLine();
    }

    for(int i = n - 1; i >= 0; i--)
    {
      Console.WriteLine(t[i]);
    }
  }
}

