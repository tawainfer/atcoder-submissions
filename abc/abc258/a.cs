// https://atcoder.jp/contests/abc258/submissions/46508889

using System;

public class A
{
  static void Main()
  {
    int k = int.Parse(Console.ReadLine());
    int h = 21;
    int w = 0;

    h += k / 60;
    w = k % 60;

    Console.Write(string.Format($"{h:d2}:{w:d2}"));
  }
}

