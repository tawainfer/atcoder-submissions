// https://atcoder.jp/contests/abc201/submissions/46676587

class A
{
  static void Main()
  {
    string[] a = Console.ReadLine().Split(" ");
    for(int i = 0; i < 3; i++)
    {
      if((int.Parse(a[i]) - int.Parse(a[(i + 1) % 3])) + (int.Parse(a[i]) - int.Parse(a[(i + 2) % 3])) == 0)
      {
        Console.Write("Yes");
        return;
      }
    }

    Console.Write("No");
  }
}

