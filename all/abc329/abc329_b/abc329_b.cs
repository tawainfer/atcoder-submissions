using System;
using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    string[] a = ReadLine().Split(" ");

    int r1 = 0;
    int r2 = 0;

    for(int i = 0; i < n; i++)
    {
      r1 = Math.Max(int.Parse(a[i]), r1);
    }

    for(int i = 0; i < n; i++)
    {
      if(int.Parse(a[i]) != r1)
      {
        r2 = Math.Max(int.Parse(a[i]), r2);
      }
    }

    Write(r2);
  }
}
