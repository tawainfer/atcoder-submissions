// https://atcoder.jp/contests/abc167/submissions/46443598

using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = Console.ReadLine();

    bool ans = true;
    for(int i = 0; i < s.Length; i++)
    {
      if(s[i] != t[i])
      {
        ans = false;
        break;
      }
    }

    if(ans)
    {
      Console.WriteLine("Yes");
    }
    else
    {
      Console.WriteLine("No");
    }
  }
}

