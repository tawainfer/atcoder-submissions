// https://atcoder.jp/contests/abc343/submissions/50857390

using static System.Console;

public class A
{
  static void Main()
  {
    string[] t = ReadLine().Split();
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    for(int i = 0; i <= 9; i++)
    {
      if(i != a + b)
      {
        Write(i);
        break;
      }
    }
  }
}

