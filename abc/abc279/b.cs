// https://atcoder.jp/contests/abc279/submissions/46445913

using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = Console.ReadLine();

    if(t.Length > s.Length)
    {
      Console.WriteLine("No");
      return;
    }

    bool ans = false;
    for(int i = 0; i <= s.Length - t.Length; i++)
    {
      bool check = true;
      for(int j = 0; j < t.Length; j++)
      {
        if(s[i + j] != t[j])
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

