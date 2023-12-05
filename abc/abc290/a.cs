// https://atcoder.jp/contests/abc290/submissions/48204283

using static System.Console;

public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split();
    int n = int.Parse(t[0]);
    int m = int.Parse(t[1]);

    int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
    int[] b = Console.ReadLine().Split().Select(int.Parse).ToArray();

    int ans = 0;
    foreach(int i in b)
    {
      ans += a[i - 1];
    }

    WriteLine(ans);
  }
}

