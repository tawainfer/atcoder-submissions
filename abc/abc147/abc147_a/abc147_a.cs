class A
{
  static void Main()
  {
    string[] a = Console.ReadLine().Split(" ");
    
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
      sum += int.Parse(a[i]);
    }

    if(sum <= 21)
    {
      Console.Write("win");
    }
    else
    {
      Console.Write("bust");
    }
  }
}
