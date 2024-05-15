class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int x = int.Parse(t[0]);
    int a = int.Parse(t[1]);

    if(x < a)
    {
      Console.Write(0);
    }
    else
    {
      Console.Write(10);
    }
  }
}
