// https://atcoder.jp/contests/abc202/submissions/46441683

using System;
public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = s.Length - 1; i >= 0; i--)
    {
      if(s[i] == '6')
      {
        Console.Write(9);
      }
      else if(s[i] == '9')
      {
        Console.Write(6);
      }
      else
      {
        Console.Write(s[i]);
      }
    }
  }
}

