public class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int x = int.Parse(t[0]);
    int y = int.Parse(t[1]);

    for(int i = x - 3; i < x + 3; i++)
    {
      if(i == y)
      {
        Console.Write("Yes");
        return;
      }
    }

    Console.Write("No");
  }
}
