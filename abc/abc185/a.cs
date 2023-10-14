// https://atcoder.jp/contests/abc185/submissions/46503305

using System;

public class A
{
  static void Main()
  {
    string[] a = Console.ReadLine().Split(" ");

    int ans = 100;
    for(int i = 0; i < a.Length; i++)
    {
      if(int.Parse(a[i]) < ans)
      {
        ans = int.Parse(a[i]);
      }
    }

    Console.Write(ans);
  }
}

