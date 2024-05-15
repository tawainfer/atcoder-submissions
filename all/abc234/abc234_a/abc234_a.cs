using System;

public class A
{
  static int f(int x)
  {
    return x * x + 2 * x + 3;
  }

  static void Main()
  {
    int x = int.Parse(Console.ReadLine());
    Console.WriteLine(A.f(A.f(A.f(x) + x) + A.f(A.f(x))));
  }
}
