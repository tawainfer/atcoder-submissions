using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = 0; i < s.Length; i++)
    {
      if(s[i] < 'a')
      {
        Console.Write(i + 1);
        return;
      }
    }
  }
}
