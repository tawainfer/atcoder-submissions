using System;

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int m = int.Parse(t[1]);

    Console.WriteLine(n / m);
  }
}
