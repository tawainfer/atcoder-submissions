using static System.Console;

public class A
{
  static void Main()
  {
    String s = ReadLine();
    for(int i = 0; i < s.Length - 1; i++)
    {
      Write(s[i]);
    }
    Write(4);
  }
}
