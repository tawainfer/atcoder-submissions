using System;

public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    string t = "";

    while(t.Length < 6)
    {
      t += s;
    }

    Console.Write(t);
  }
}
