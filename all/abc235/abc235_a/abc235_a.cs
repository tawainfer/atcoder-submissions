using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    int a = s[0] - 48;
    int b = s[1] - 48;
    int c = s[2] - 48;

    Console.Write(100 * a + 10 * b + c + 100 * b + 10 * c + a + 100 * c + 10 * a + b);
  }
}
