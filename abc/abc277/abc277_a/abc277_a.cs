using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    string x = t[1];

    string[] p = Console.ReadLine().Split(" ");
    for(int i = 0; i < n; i++)
    {
      if(x == p[i])
      {
        Console.Write(i + 1);
        return;
      }
    }
  }
}
