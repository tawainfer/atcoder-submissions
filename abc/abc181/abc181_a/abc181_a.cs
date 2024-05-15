using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    if(n % 2 == 0)
    {
      Console.Write("White");
    }
    else
    {
      Console.Write("Black");
    }
  }
}
