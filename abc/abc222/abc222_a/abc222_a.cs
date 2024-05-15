using System;
public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    for(int i = 0; i < 4 - s.Length; i++)
    {
      Console.Write(0);
    }
    
    Console.WriteLine(s);
  }
}
