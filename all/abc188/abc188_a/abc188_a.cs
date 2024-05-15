using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split();
    int x = int.Parse(t[0]);
    int y = int.Parse(t[1]);

    if(x > y)
    {
      int z = x;
      x = y;
      y = z;
    }

    if(x + 3 > y)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}
