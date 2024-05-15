using static System.Console;

public class A
{
  static void Main()
  {
    int q = int.Parse(ReadLine());
    List<int> a = new();

    for(int _ = 0; _ < q; _++)
    {
      string[] t = ReadLine().Split();
      int p = int.Parse(t[0]);

      switch(p)
      {
        case 1:
          int x = int.Parse(t[1]);
          a.Add(x);
          break;
        case 2:
          int k = int.Parse(t[1]);
          WriteLine(a[a.Count - k]);
          break;
      }
    }
  }
}
