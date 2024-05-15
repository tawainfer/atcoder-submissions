class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int m = int.Parse(t[1]);
    int p = int.Parse(t[2]);

    int ans = 0;
    for(int i = m; i <= 10000000; i += p)
    {
      if(i > n) break;
      ans++;
    }

    Console.Write(ans);
  }
}
