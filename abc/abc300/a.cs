// https://atcoder.jp/contests/abc300/submissions/46505541

using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int a = int.Parse(t[1]);
    int b = int.Parse(t[2]);
    string[] c = Console.ReadLine().Split(" ");

    int s = a + b;
    for(int i = 0; i < c.Length; i++)
    {
      if(int.Parse(c[i]) == s)
      {
        Console.Write(i + 1);
        return;
      }
    }
  }
}

