using System;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split();
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    int ans = 1;
    for(int i = 0; i < b; i++)
    {
      ans *= a;
    }

    Console.Write(ans);
  }
}
