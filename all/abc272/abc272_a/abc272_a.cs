using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] a = Console.ReadLine().Split(" ");

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
      ans += int.Parse(a[i]);
    }

    Console.Write(ans);
  }
}
