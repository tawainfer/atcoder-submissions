// https://atcoder.jp/contests/abc262/submissions/46505734

using System;

public class A
{
  static void Main()
  {
    int y = int.Parse(Console.ReadLine());
    for(int i = y; i <= 5000; i++)
    {
      if(i % 4 == 2)
      {
        Console.Write(i);
        return;
      }
    }
  }
}

