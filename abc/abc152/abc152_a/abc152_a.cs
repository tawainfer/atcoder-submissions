using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int m = int.Parse(t[1]);

    if(n == m)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}
