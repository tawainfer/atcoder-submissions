// https://atcoder.jp/contests/abc230/submissions/46445770

using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = "";

    for(int i = 0; i < 1000; i++)
    {
      t += "oxx";
    }

    bool ans = false;
    for(int i = 0; i <= t.Length - s.Length; i++)
    {
      bool check = true;
      for(int j = 0; j < s.Length; j++)
      {
        if(t[i + j] != s[j])
        {
          check = false;
          break;
        }
      }

      if(check)
      {
        ans = true;
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

