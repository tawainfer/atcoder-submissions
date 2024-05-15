using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = 0; i < 3; i++)
    {
      for(int j = i; j < 3; j++)
      {
        if(s[i] != s[j])
        {
          Console.Write("Lost");
          return;
        }
      }
    }

    Console.Write("Won");
  }
}
