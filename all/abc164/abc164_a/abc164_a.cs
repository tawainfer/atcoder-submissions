using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int s = int.Parse(t[0]);
    int w = int.Parse(t[1]);

    if(s <= w)
    {
      Console.Write("unsafe");
    }
    else
    {
      Console.Write("safe");
    }
  }
}
