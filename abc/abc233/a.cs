// https://atcoder.jp/contests/abc233/submissions/46506090

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int x = int.Parse(t[0]);
    int y = int.Parse(t[1]);

    int ans = 0;
    while(x < y)
    {
      ans++;
      x += 10;
    }

    Console.Write(ans);
  }
}

