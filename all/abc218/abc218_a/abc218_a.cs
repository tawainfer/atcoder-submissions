using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();

    if(s[n - 1] == 'o')
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}
