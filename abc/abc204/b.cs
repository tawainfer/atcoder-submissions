// https://atcoder.jp/contests/abc204/submissions/46508122

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] a = Console.ReadLine().Split(" ");

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
      if(int.Parse(a[i]) > 10)
      {
        ans += int.Parse(a[i]) - 10;
      }
    }

    Console.Write(ans);
  }
}

