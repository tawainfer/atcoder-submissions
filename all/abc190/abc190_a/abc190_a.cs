class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int c = int.Parse(t[2]);

    while(true)
    {
      if(c == 0)
      {
        if(a == 0)
        {
          Console.Write("Aoki");
          return;
        }
        a--;
      }
      else
      {
        if(b == 0)
        {
          Console.Write("Takahashi");
          return;
        }
        b--;
      }

      c ^= 1;
    }
  }
}
