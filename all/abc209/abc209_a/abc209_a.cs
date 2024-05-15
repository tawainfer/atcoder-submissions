using System;

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    int a = int.Parse(t[0]);
    int b = int.Parse(t[1]);

    int ans = 0;
    for(int i = a; i <= b; i++)
    {
      ans++;
    }

    Console.WriteLine(ans);
  }
}
