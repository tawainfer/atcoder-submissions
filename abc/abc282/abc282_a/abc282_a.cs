using System;

public class A
{
  static void Main()
  {
    int k = int.Parse(Console.ReadLine());
    for(int i = 0; i < k; i++) {
      Console.Write((char)('A' + i));
    }
  }
}
