using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int x = int.Parse(t[1]);
    string[] s = Console.ReadLine().Split(" ");
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
      if(int.Parse(s[i]) <= x)
      {
        sum += int.Parse(s[i]);
      }
    }

    Console.Write(sum);
  }
}
