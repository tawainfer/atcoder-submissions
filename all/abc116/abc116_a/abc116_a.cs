using System;

public class A
{
  static int Min(int a, int b)
  {
    if(a < b)
    {
      return a;
    }
    return b;
  }

  static int Calc(int a, int b, int c)
  {
    return a * b / 2;
  }

  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int c = int.Parse(t[2]);

    Console.Write(A.Min(A.Calc(a, b, c), A.Min(A.Calc(b, c, a), A.Calc(c, a, b))));
  }
}
