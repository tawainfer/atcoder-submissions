// https://atcoder.jp/contests/abc324/submissions/46651946

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] a = Console.ReadLine().Split(" ");

    for(int i = 0; i < n; i++)
    {
      for(int j = i + 1; j < n; j++)
      {
        if(a[i] != a[j])
        {
          Console.WriteLine("No");
          return;
        }
      }
    }

    Console.WriteLine("Yes");
  }
}

