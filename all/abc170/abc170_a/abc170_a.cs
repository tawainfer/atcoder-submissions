using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
      sum += int.Parse(t[i]);
    }

    Console.Write(15 - sum);
  }
}
