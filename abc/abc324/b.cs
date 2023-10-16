// https://atcoder.jp/contests/abc324/submissions/46651981

using System;

public class A
{
  static void Main()
  {
    long n = long.Parse(Console.ReadLine());
    
    while(n % 2 == 0)
    {
      n /= 2;
    }

    while(n % 3 == 0)
    {
      n /= 3;
    }

    if(n == 1)
    {
      Console.Write("Yes");
    }
    else
    {
      Console.Write("No");
    }
  }
}

