using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    string[] a = ReadLine().Split();

    int s = 0;
    for(int i = 0; i < n - 1; i++)
    {
      s += int.Parse(a[i]);
    }
      
    Write(-s);
  }
}
