using static System.Console;

public class A
{
  static void Main()
  {
    int[] a = ReadLine().Split().Select(int.Parse).ToArray();
    int[] b = ReadLine().Split().Select(int.Parse).ToArray();
    Write(a.Sum() - b.Sum() + 1);
  }
}
