using System;

public class A
{
  static void Main()
  {
    int x = int.Parse(Console.ReadLine());
    if(x % 100 == 0 && x != 0)
    {
      Console.WriteLine("Yes");
    }
    else
    {
      Console.WriteLine("No");
    }
  }
}
