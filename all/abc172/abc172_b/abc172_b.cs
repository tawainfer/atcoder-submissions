using System;
public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = Console.ReadLine();

    int ans = 0;
    for(int i = 0; i < s.Length; i++)
    {
      if(s[i] != t[i])
      {
        ans++;
      }
    }

    Console.WriteLine(ans);
  }
}
