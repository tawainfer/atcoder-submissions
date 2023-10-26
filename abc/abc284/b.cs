// https://atcoder.jp/contests/abc284/submissions/46937887

class A
{
  static void Main()
  {
    int t = int.Parse(Console.ReadLine());
    for(int i = 0; i < t; i++)
    {
      int n = int.Parse(Console.ReadLine());
      string[] a = Console.ReadLine().Split(" ");
      int cnt = 0;

      for(int j = 0; j < n; j++)
      {
        if(int.Parse(a[j]) % 2 != 0)
        {
          cnt++;
        }
      }

      Console.WriteLine(cnt);
    }
  }
}

