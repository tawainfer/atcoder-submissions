// https://atcoder.jp/contests/abc124/submissions/46700013

class A
{
  static int Max(int a, int b)
  {
    return (a > b ? a : b);
  }

  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    if(a == b)
    {
      Console.Write(a * 2);
    }
    else
    {
      Console.Write(A.Max(a, b) + A.Max(a, b) - 1);
    }
  }
}

