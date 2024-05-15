using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    
    if(a == b)
    {
      Console.Write(a);
      return;
    }
    
    Console.Write(3 - a - b);
  }
}
