class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int n = int.Parse(t[0]);
    int h = int.Parse(t[1]);
    int x = int.Parse(t[2]);

    string[] p = Console.ReadLine().Split(" ");
    for(int i = 0; i < p.Length; i++)
    {
      if(int.Parse(p[i]) + h >= x)
      {
        Console.Write(i + 1);
        return;
      }
    }
  }
}
