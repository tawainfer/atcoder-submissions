class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);
    int c = int.Parse(t[2]);
    int d = int.Parse(t[3]);

    int left = a + b;
    int right = c + d;

    if(left > right)
    {
      Console.Write("Left");
    }
    else if(left < right)
    {
      Console.Write("Right");
    }
    else
    {
      Console.Write("Balanced");
    }
  }
}
