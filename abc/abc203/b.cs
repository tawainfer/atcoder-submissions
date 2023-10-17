// https://atcoder.jp/contests/abc203/submissions/46676459

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int h = int.Parse(t[0]);
    int w = int.Parse(t[1]);

    int ans = 0;
    for(int i = 1; i <= h; i++)
    {
      for(int j = 1; j <= w; j++)
      {
        ans += 100 * i + j;
      }
    }

    Console.WriteLine(ans);
  }
}

