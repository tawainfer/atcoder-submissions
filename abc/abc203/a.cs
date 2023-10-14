// https://atcoder.jp/contests/abc203/submissions/46503095

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");

    for(int i = 0; i < t.Length; i++)
    {
      for(int j = i + 1; j < t.Length; j++)
      {
        if(int.Parse(t[i]) == int.Parse(t[j]))
        {
          Console.WriteLine(t[3 - i - j]);
          return;
        }
      }
    }

    Console.WriteLine(0);
  }
}

