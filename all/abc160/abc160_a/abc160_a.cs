using System;
public class A
{
  static void Main()
  {
    string s = Console.ReadLine();
    if(s[2] == s[3] && s[4] == s[5])
    {
      Console.WriteLine("Yes");
    }
    else
    {
      Console.WriteLine("No");
    }
  }
}
