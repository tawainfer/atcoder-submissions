// https://atcoder.jp/contests/abc287/submissions/46509290

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
      if(Console.ReadLine() == "For")
      {
        cnt++;
      }
    }

    double h = n / 2.0;
    if(cnt >= h)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}

