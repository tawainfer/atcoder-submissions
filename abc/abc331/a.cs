// https://atcoder.jp/contests/abc331/submissions/48169403

using static System.Console;

public class A
{
  static void Main()
  {
    int[] t = ReadLine().Split().Select(int.Parse).ToArray();
    int M = t[0];
    int D = t[1];

    t = ReadLine().Split().Select(int.Parse).ToArray();
    int y = t[0];
    int m = t[1];
    int d = t[2];

    if(m == M && d == D) {
      Write($"{y + 1} {1} {1}");
    } else if(d == D) {
      Write($"{y} {m + 1} {1}");
    } else {
      Write($"{y} {m} {d + 1}");
    }
  }
}

