using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    
    for(int i = 0; i <= n; i++)
    {
      for(int j = 0; j <= n; j++)
      {
        for(int k = 0; k <= n; k++)
        {
          if(i + j + k <= n)
          {
            WriteLine($"{i} {j} {k}");
          }
        }
      }
    }
  }
}
