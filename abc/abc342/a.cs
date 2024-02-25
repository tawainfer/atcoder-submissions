// https://atcoder.jp/contests/abc342/submissions/50627356

using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    for(int i = 0; i < s.Length; i++)
    {
      bool check = true;

      for(int j = 0; j < s.Length; j++)
      {
        if(i == j) continue;
        if(s[i] == s[j])
        {
          check = false;
          break;
        }
      }

      if(check)
      {
        Write(i + 1);
        break;
      }
    }
  }
}

