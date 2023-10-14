// https://atcoder.jp/contests/abc187/submissions/46505861

using System;

public class A
{
  static int StringSum(string s)
  {
    int res = 0;
    for(int i = 0; i < s.Length; i++)
    {
      res += (s[i] - 48);
    }

    return res;
  }

  static int Max(int a, int b)
  {
    if(a > b)
    {
      return a;
    }
    return b;
  }

  static void Main()
  {
    string[] t = Console.ReadLine().Split();
    Console.Write(A.Max(A.StringSum(t[0]), A.StringSum(t[1])));
  }
}

