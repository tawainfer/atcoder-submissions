using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    
    int ans = 0;
    for(int i = 0; i < t.Length; i++)
    {
      for(int j = i + 1; j < t.Length; j++)
      {
        int x = int.Parse(t[i]) + int.Parse(t[j]);
        if(ans < x)
        {
          ans = x;
        }
      }
    }

    Console.WriteLine(ans);
  }
}
