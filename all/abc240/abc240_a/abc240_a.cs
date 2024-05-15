using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    if(b - a == 1 || a == 1 && b == 10)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}
