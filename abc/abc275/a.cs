// https://atcoder.jp/contests/abc275/submissions/46938006

class A
{
  static void Main()
  {
    int n = int.Parse(Console.ReadLine());
    string[] h = Console.ReadLine().Split(" ");

    int idx = 0;
    for(int i = 0; i < n; i++)
    {
      if(int.Parse(h[idx]) < int.Parse(h[i]))
      {
        idx = i;
      }
    }

    Console.Write(idx + 1);
  }
}

