using System;

public class A
{
  static void Main()
  {
    int[] a = new int[3];
    for(int i = 0; i < 3; i++)
    {
      a[i] = (int)(Console.Read() - 48);
    }

    for(int i = 0; i <= 9; i++)
    {
      for(int j = 0; j <= 9; j++)
      {
        for(int k = 0; k <= 9; k++)
        {
          if(i * j == k && 100 * i + 10 * j + k >= a[0] * 100 + a[1] * 10 + a[2]) {
            Console.Write($"{i}{j}{k}");
            return;
          }
        }
      }
    }
  }
}