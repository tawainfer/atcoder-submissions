using static System.Console;

public class A
{
  static void Main()
  {
    string[] t = ReadLine().Split();
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    Write((a == b ? -1 : 6 - a - b));
  }
}
