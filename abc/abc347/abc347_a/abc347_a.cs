using static System.Console;

public class A
{
  static void Main()
  {
    string[] t = ReadLine().Split();
    int n = int.Parse(t[0]);
    int k = int.Parse(t[1]);

    t = ReadLine().Split();
    for(int i = 0; i < n; i++)
    {
      int x = int.Parse(t[i]);
      if(x % k == 0)
      {
        Write($"{x / k} ");
      }
    }
  }
}
