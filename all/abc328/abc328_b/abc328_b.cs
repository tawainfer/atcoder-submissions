using System;
using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    int[] d = ReadLine().Split().Select(int.Parse).ToArray();

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= d[i - 1]; j++)
      {
        string s = $"{i}{j}";
        bool check = true;
        foreach(char c in s)
        {
          if(c != s[0])
          {
            check = false;
            break;
          }
        }

        if(check)
        {
          ans++;
        }
      }
    }

    WriteLine(ans);
  }
}
