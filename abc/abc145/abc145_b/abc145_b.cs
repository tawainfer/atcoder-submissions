using System;

class A
{
  static void Main()
  {
    Console.ReadLine();
    string s = Console.ReadLine();

    if(s.Length % 2 != 0)
    {
      Console.WriteLine("No");
      return;
    }

    for(int i = 0; i < s.Length / 2; i++)
    {
      if(s[i] != s[i + s.Length / 2])
      {
        Console.WriteLine("No");
        return;
      }
    }

    Console.WriteLine("Yes");
  }
}
