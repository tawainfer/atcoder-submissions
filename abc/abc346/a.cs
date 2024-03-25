// https://atcoder.jp/contests/abc346/submissions/51670669

using static System.Console;

public class A
{
  static void Main()
  {
    int n = int.Parse(ReadLine());
    string[] a = ReadLine().Split();
    for(int i = 1; i < n; i++)
    {
      Write($"{int.Parse(a[i - 1]) * int.Parse(a[i])} ");
    }
  }
}

