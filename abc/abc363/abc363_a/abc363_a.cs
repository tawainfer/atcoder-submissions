using static System.Console;

public class A
{
  static void Main()
  {
    int r = int.Parse(ReadLine());
    WriteLine(100 - r % 100);
  }
}
