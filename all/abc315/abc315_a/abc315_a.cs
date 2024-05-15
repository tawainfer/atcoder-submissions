using System;
public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = "aeiou";

    for(int i = 0; i < s.Length; i++)
    {
      bool check = true;
      for(int j = 0; j < t.Length; j++)
      {
        if(s[i] == t[j])
        {
          check = false;
          break;
        }
      }

      if(check)
      {
        Console.Write(s[i]);
      }
    }
  }
}
