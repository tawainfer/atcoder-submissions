using System;

public class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    int ans = 1;

    for(int i = n; i > 0; i--) {
      ans *= i;
    }

    Console.Write(ans);
  }
}
