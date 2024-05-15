class A
{
  static long pow(long a, long b)
  {
    long res = 1;
    while(b > 0)
    {
      b--;
      res *= a;
    }

    return res;
  }

  static void Main()
  {
    long b = long.Parse(Console.ReadLine());
    long max = 10000000;

    for(long i = 1; i < max; i++)
    {
      if(pow(i, i) > b) break;
      if(pow(i, i) == b)
      {
        Console.Write(i);
        return;
      }
    }

    Console.Write(-1);
  }
}
