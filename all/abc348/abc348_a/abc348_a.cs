using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    for(int i = 0; i < n; i++)
    {
      Write(i % 3 == 2 ? 'x' : 'o');
    }
  }
}
