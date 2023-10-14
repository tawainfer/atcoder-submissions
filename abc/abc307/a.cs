// https://atcoder.jp/contests/abc307/submissions/46508692

using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] t = Console.ReadLine().Split(" ");

    int sum = 0;
    for(int i = 0; i < t.Length; i++)
    {
      sum += int.Parse(t[i]);
      if(i % 7 == 6)
      {
        Console.Write(sum + " ");
        sum = 0;
      }
    }
  }
}

