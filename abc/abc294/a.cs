// https://atcoder.jp/contests/abc294/submissions/46505564

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] a = Console.ReadLine().Split(" ");

    for(int i = 0; i < n; i++)
    {
      if(int.Parse(a[i]) % 2 == 0)
      {
        Console.Write(a[i] + " ");
      }
    }
  }
}

