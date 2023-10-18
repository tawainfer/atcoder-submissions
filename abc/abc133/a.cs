// https://atcoder.jp/contests/abc133/submissions/46699940

class A
{
  static int Min(int a, int b)
  {
    return (a < b ? a : b);
  }

  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int a = int.Parse(t[1]);
    int b = int.Parse(t[2]);

    Console.Write(A.Min(a * n, b));
  }
}

