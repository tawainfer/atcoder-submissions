using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    for(int i = 0; i < n; i++)
    {
      string[] t = ReadLine().Split();
      int a = int.Parse(t[0]);
      int b = int.Parse(t[1]);
      WriteLine(a + b);
    }
  }
}
