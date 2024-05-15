class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split();
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int c = int.Parse(t[2]);

    for(int i = a; i <= b; i++)
    {
      if(i % c == 0)
      {
        Console.Write(i);
        return;
      }
    }

    Console.Write(-1);
  }
}
