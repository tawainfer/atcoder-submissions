using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    Write("1");
    for(int _ = 0; _ < n; _++)
    {
      Write("01");
    }
  }
}
