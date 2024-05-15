using System;

class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    int ans = 0;

    for(int i = 0; i < s.Length / 2; i++)
    {
      if(s[i] != s[s.Length - 1 - i])
      {
        ans++;
      }
    }

    Console.WriteLine(ans);
  }
}
