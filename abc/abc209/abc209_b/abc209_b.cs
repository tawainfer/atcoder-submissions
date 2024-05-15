class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int x = int.Parse(t[1]);
    string[] a = Console.ReadLine().Split(" ");

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
      if(i % 2 == 0)
      {
        ans += int.Parse(a[i]);
      }
      else
      {
        ans += int.Parse(a[i]) - 1;
      }
    }

    Console.Write(ans <= x ? "Yes" : "No");
  }
}
