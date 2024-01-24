// https://atcoder.jp/contests/abc337/submissions/49598094

using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());

    int st = 0;
    int sa = 0;
    for(int i = 0; i < n; i++)
    {
      string[] t = ReadLine().Split();
      int x = int.Parse(t[0]);
      int y = int.Parse(t[1]);

      st += x;
      sa += y;
    }

    if(st > sa)
    {
      Write("Takahashi");
    }
    else if(st < sa)
    {
      Write("Aoki");
    }
    else
    {
      Write("Draw");
    }
  }
}

