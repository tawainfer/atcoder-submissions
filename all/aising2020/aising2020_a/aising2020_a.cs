class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int l = int.Parse(t[0]);
    int r = int.Parse(t[1]);
    int d = int.Parse(t[2]);

    int ans = 0;
    for(int i = l; i <= r; i++)
    {
      if(i % d == 0)
      {
        ans++;
      }
    }

    Console.Write(ans);
  }
}
