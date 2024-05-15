using static System.Console;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int k = t[0];
    int g = t[1];
    int m = t[2];
    
    int cg = 0;
    int cm = 0;
    for(int _ = 0; _ < k; _++)
    {
      if(cg == g)
      {
        cg = 0;
      }
      else if(cm == 0)
      {
        cm = m;
      }
      else if(cg + cm > g)
      {
        cm -= g - cg;
        cg = g;
      }
      else
      {
        cg += cm;
        cm = 0;
      }
    }

    Write($"{cg} {cm}");
  }
}
