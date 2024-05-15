using System;

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());

    Console.Write("AGC0");
    if(n < 10)
    {
      Console.Write(0);
    }

    if(n >= 42)
    {
      Console.WriteLine(n + 1);
    }
    else
    {
      Console.WriteLine(n);
    }
  }
}
