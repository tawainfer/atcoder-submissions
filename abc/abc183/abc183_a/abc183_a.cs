using System;

public class A
{
  static void Main()
  {
    int x = int.Parse(Console.ReadLine());
    if(x < 0)
    {
      Console.WriteLine(0);
    }
    else
    {
      Console.WriteLine(x);
    }
  }
}
