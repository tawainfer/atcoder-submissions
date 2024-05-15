using System;

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    if(0 < a && b == 0)
    {
      Console.WriteLine("Gold");
    }
    else if(a == 0 && 0 < b)
    {
      Console.WriteLine("Silver");
    }
    else
    {
      Console.WriteLine("Alloy");
    }
  }
}
