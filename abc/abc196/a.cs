// https://atcoder.jp/contests/abc196/submissions/46508219

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    t = Console.ReadLine().Split(" ");
    int c = int.Parse(t[0]);
    int d = int.Parse(t[1]);

    int ans = -1000;
    for(int i = a; i <= b; i++)
    {
      for(int j = c; j <= d; j++)
      {
        if(ans < i - j)
        {
          ans = i - j;
        }
      }
    }

    Console.Write(ans);
  }
}

