using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    int[] h = ReadLine().Split().Select(int.Parse).ToArray();

    for(int i = 0; i < n; i++)
    {
      if(h[i] > h[0])
      {
        Write(i + 1);
        return;
      }
    }

    Write(-1);
  }
}
