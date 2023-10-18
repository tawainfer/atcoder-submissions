// https://atcoder.jp/contests/abc128/submissions/46699958

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int p = int.Parse(t[1]);

    p += a * 3;
    Console.Write(p / 2);
  }
}

