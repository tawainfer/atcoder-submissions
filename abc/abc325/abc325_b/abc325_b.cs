class A
{
  static int Max(int a, int b)
  {
    return (a > b ? a : b);
  }

  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    
    int[] cnt = new int[24];
    for(int i = 0; i < 24; i++)
    {
      cnt[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
      string[] t = Console.ReadLine().Split(" ");
      int w = int.Parse(t[0]);
      int x = int.Parse(t[1]);
      cnt[x] += w;
    }

    int ans = 0;
    for(int i = 0; i < 24; i++)
    {
      int sum = 0;

      for(int j = 0; j < 9; j++)
      {
        int k = (i + j) % 24;
        sum += cnt[k];
      }

      ans = Max(ans, sum);
    }

    Console.Write(ans);
  }
}
