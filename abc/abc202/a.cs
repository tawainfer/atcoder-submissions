// https://atcoder.jp/contests/abc202/submissions/46467213

using System;

class A
{
  static void Main()
  {
    string[] t = Console.ReadLine().Split(" ");
    
    int ans = 0;
    for(int i = 0; i < 3; i++)
    {
      ans += 7 - int.Parse(t[i]);
    }

    Console.WriteLine(ans);
  }
}

