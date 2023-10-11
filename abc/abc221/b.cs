// https://atcoder.jp/contests/abc221/submissions/46446198

using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = Console.ReadLine();

    if(s == t)
    {
      Console.WriteLine("Yes");
      return;
    }

    for(int i = 0; i < s.Length - 1; i++)
    {
      for(int j = i + 1; j < t.Length; j++)
      {
        j = i + 1;
        string u = "";
        for(int k = 0; k < s.Length; k++)
        {
          if(k == i)
          {
            u += s[j];
          }
          else if(k == j)
          {
            u += s[i];
          }
          else
          {
            u += s[k];
          }
        }

        if(t == u)
        {
          Console.WriteLine("Yes");
          return;
        }
        break;
      }
    }

    Console.WriteLine("No");
  }
}

