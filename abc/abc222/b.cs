// https://atcoder.jp/contests/abc222/submissions/46506127

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int p = int.Parse(t[1]);
    string[] a = Console.ReadLine().Split(" ");

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
      if(int.Parse(a[i]) < p)
      {
        ans++;
      }
    }

    Console.Write(ans);
  }
}

