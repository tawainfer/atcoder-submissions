using System;

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());

    if(n <= 125)
    {
      Console.WriteLine(4);
    }
    else if(n <= 211)
    {
      Console.WriteLine(6);
    }
    else
    {
      Console.WriteLine(8);
    }
  }
}
