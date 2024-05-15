using System;

public class A
{
  static int Pow(int a, int b)
  {
    int res = 1;
    for(int i = 0; i < b; i++)
    {
      res *= a;
    }

    return res;
  }

  static void Main()
  {
    string[] t =  Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    Console.Write(A.Pow(a, b) + A.Pow(b, a));
  }
}
