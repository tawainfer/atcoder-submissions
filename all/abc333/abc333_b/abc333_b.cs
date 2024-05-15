using static System.Console;

public class A
{
  static void Main()
  {
    string s = ReadLine();
    string t = ReadLine();

    int ds = Math.Abs(s[0] - s[1]);
    int dt = Math.Abs(t[0] - t[1]);

    if(ds == dt || 5 - ds == dt)
    {
      Write("Yes");
    }
    else
    {
      Write("No");
    }
  }
}
