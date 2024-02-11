// https://atcoder.jp/contests/abc340/submissions/50216148

using static System.Console;

public class A
{
  static void Main()
  {
    string[] t = ReadLine().Split();
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int d = int.Parse(t[2]);

    for(int i = a; i <= b; i += d)
    {
      Write($"{i} ");
    }
  }
}

