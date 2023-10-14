// https://atcoder.jp/contests/abc264/submissions/46505697

using System;

public class A
{
  static void Main()
  {
    string s = "atcoder";
    string[] t = Console.ReadLine().Split(" ");
    int l = int.Parse(t[0]);
    int r = int.Parse(t[1]);
    l--;
    r--;

    for(int i = l; i <= r; i++)
    {
      Console.Write(s[i]);
    }
  }
}

