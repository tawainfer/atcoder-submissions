class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    for(int i = -1000; i < 1000; i++)
    {
      for(int j = -1000; j < 1000; j++)
      {
        if(i + j == a && i - j == b)
        {
          Console.Write($"{i} {j}");
          return;
        }
      }
    }
  }
}
